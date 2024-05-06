module div (clk,rst_n,valid,sign,x,y,result,rem,finish);
    input               clk ;
    input               rst_n   ;
    input               valid   ;
    input               sign    ;
    input   [63:0]      x       ;
    input   [63:0]      y       ;
    output  [63:0]      result  ;
    output  [63:0]      rem      ;
    output              finish  ;  

    wire    [63:0]      x_abs   ;
    wire    [63:0]      y_abs   ;
    wire                s_sign  ;
    wire                r_sign  ;

    (*MAX_FANOUT = 50*) reg [ 4:0] current_state;
    (*MAX_FANOUT = 50*) reg [ 4:0] next_state;

    // state
    localparam IDLE = 5'b00001,
               INIT = 5'b00010,
               QUOT = 5'b00100,
               FIX  = 5'b01000,
               DONE = 5'b10000;
    
    // state translation
    always @(posedge clk ) begin
        if(~rst_n)
            current_state <= IDLE;
        else
            current_state <= next_state;
    end

    // next state
    always @(*) begin
        case (current_state) 
            IDLE: begin
                if(~rst_n)
                    next_state = IDLE;
                else if(valid)
                    next_state = INIT;
                else
                    next_state = IDLE;
            end
            INIT: next_state = QUOT;
            QUOT: begin
                if(final_shift)
                    next_state = FIX;
                else
                    next_state = QUOT;
            end
            FIX: next_state = DONE;
            DONE: next_state = IDLE;
            default: next_state = IDLE;
        endcase
    end
    

    // get the abs of operation num
    sign_oppo oppo0(x, sign & x[63], x_abs);    
    sign_oppo oppo1(y, sign & y[63], y_abs); 

    // get the sign bit of result and rem
    assign s_sign = x[63] ^ y[63];
    assign r_sign = x[63];    

    // INLE output
    reg     [63:0]      x_abs_reg;
    reg     [63:0]      y_abs_reg;

    // INIT output
    reg     [63:0]      divisor_n;
    reg     [63:0]      divisor;
    reg     [63:0]      dividend;
    wire    [63:0]      dividend_tmp;
    wire     [5:0]       shift_x;
    wire                zero_x;
    wire     [5:0]       shift_y;
    wire                zero_y;
    wire     [5:0]       shift_x_tmp;
    wire     [5:0]       shift;


    // QUOT output
    reg     [1:0]       q;
    reg     [5:0]       cout;
    wire                final_shift;
    reg     [63:0]      add_B;

    // FIX
    wire     [63:0]      fix_rem;
    reg      [63:0]      fix_a;
    reg      [63:0]      fix_b;
    reg      [63:0]      s_abs_reg;
    reg      [63:0]      r_abs_reg;
    wire     [63:0]      s_abs;
    wire     [63:0]      r_abs;


    // INLE 
    always @(posedge clk ) begin
        if(~rst_n) begin
            x_abs_reg <= 64'b0;
            y_abs_reg <= 64'b0;
        end
        else if(current_state[0] & valid) begin
            x_abs_reg <= x_abs;
            y_abs_reg <= y_abs;
        end
    end

    // INIT  
    // 1. 迭代次数
    // 2. 操作数

    // divisor operation
    always @(posedge clk ) begin
        if(~rst_n | current_state[0]) begin
            dividend <= 64'b0;
        end
        else if(current_state[1]) begin
            dividend <= (x_abs_reg << shift_x);
        end
        else if(current_state[2]) begin
            dividend <= dividend_tmp;
        end
    end 


    // leading zero detector 得到需要迭代的次数
    lzd_64 lzd0(y_abs_reg, shift_y, zero_y);
    lzd_64 lzd1(x_abs_reg, shift_x_tmp, zero_x);
    assign shift_x = shift_x_tmp - 6'b10;
    assign shift = (shift_x_tmp > shift_y) ? 6'b0 : shift_y - shift_x - 6'b1;

    always @(posedge clk ) begin
        if(~rst_n | current_state[0]) begin
            divisor <= 64'b0;
            divisor_n <= 64'b0;
        end
        else if(current_state[1]) begin
            divisor <= (y_abs_reg << (shift_y-1));
            divisor_n <= ((~y_abs_reg + 1) << (shift_y-1));
        end
    end
    
    // QUOT 
    always @(posedge clk) begin
        if(~rst_n | current_state[0]) begin
            cout <= 6'b0;
        end
        else if(current_state[2]) begin
            cout <= cout + 6'b1;
        end
    end

    assign final_shift = (cout == (shift - 6'b1));
    assign add_B = ({64{(q[0] & q[1])}} & divisor) 
                 | ({64{((~q[1]) & q[0])}} & divisor_n);

    cla #(64,4) cla0 (
        .a(dividend << 1'b1),
        .b(add_B),
        .cin(1'b0),
        .s(dividend_tmp),
        .co()
    );

    // integer i;
    always @(*) begin
        if(~rst_n | current_state[0]) begin
            q = 2'b0;
        end    
        else begin
            case (dividend[62:61])
                2'b00: begin
                    q = 2'b00;
                end
                2'b01: begin
                    q = 2'b01;
                end
                2'b10: begin
                    q = 2'b11;
                end
                2'b11: begin
                    q = 2'b00;
                end  
            endcase
        end
    end

    integer i;

    always @(posedge clk) begin
        if(~rst_n | current_state[0]) begin
            fix_a <= 64'b0;
        end
        else begin
            if(~q[1])
                fix_a <= {fix_a[62:0],q[0]};
            else 
                fix_a <= {fix_b[62:0],1'b1};
        end
    end

    // FIX
    always @(posedge clk) begin
        if(~rst_n | current_state[0]) begin
            fix_b <= 64'b0;
        end
        else begin
            if(~q[1] & q[0])
                fix_b <= {fix_a[62:0],1'b0};
            else
                fix_b <= {fix_b[62:0],~q[0]};
        end
    end

    cla #(64,4) cla1 (
        .a(dividend),
        .b(divisor),
        .cin(1'b0),
        .s(fix_rem),
        .co()
    );

    assign s_abs = (dividend[63]) ? fix_b : fix_a;
    assign r_abs = ((dividend[63]) ? fix_rem >> (shift_y-1) : dividend >> (shift_y-1));
    always @(posedge clk ) begin
        if (~rst_n | current_state[0]) begin
            s_abs_reg <= 0;
            r_abs_reg <= 0;
        end
        else if (current_state[3])
            s_abs_reg <= (shift == 0) ? 64'b0 : s_abs;
            r_abs_reg <= (shift == 0) ? x_abs_reg : r_abs;
    end


    // get the signed result
    sign_oppo oppo2(s_abs_reg, sign & s_sign, result);    
    sign_oppo oppo3(r_abs_reg, sign & r_sign, rem); 

    assign finish = current_state[4];
    
endmodule