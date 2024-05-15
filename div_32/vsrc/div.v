module div (clk,rst_n,valid,sign,x,y,result,rem,finish);
    input                   clk ;
    input                   rst_n   ;
    input                   valid   ;
    input                   sign    ;
    input       [31:0]      x       ;
    input       [31:0]      y       ;
    output reg  [31:0]      result  ;
    output reg  [31:0]      rem     ;
    output reg              finish  ;  

    // IDLE conbinational logic
    wire    [31:0]      x_abs   ;
    wire    [31:0]      y_abs   ;
    wire                s_sign  ;
    wire                r_sign  ;

    // INLE output
    reg     [31:0]      x_abs_reg;
    reg     [31:0]      y_abs_reg;

    // INIT conbinational logic
    wire     [4:0]      shift_x; // 2^6=64 2^5=32
    wire                zero_x;
    wire     [4:0]      shift_y;
    wire                zero_y;
    wire     [5:0]      shift;

    // INIT output
    reg     [31:0]      divisor_n;
    reg     [31:0]      divisor;
    reg     [31:0]      dividend;
    reg     [32:0]      remainder;
    reg     [32:0]      remainder_tmp;

    // QUOT conbinational logic
    wire    [32:0]      sub_result;
    wire                div_cout;
    wire                final_shift;
    reg     [5:0]       cout;

    // FIX
    wire     [31:0]      s_abs;
    wire     [31:0]      r_abs;
    


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
            INIT: begin 
                if(shift == 6'b0)
                    next_state = DONE;
                else
                    next_state = QUOT;
            end
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

    // output
    always @(posedge clk ) begin
        // 11 10 01
        // reset reset not in FIX stage
        if(~rst_n | ~valid) begin
            result <= 32'b0;
            rem <= 32'b0;
            finish <= 1'b0;
            // IDLE->INIT
            x_abs_reg <= 32'b0;
            y_abs_reg <= 32'b0;
            // INIT->QUOT
            divisor <= 32'b0;
            divisor_n <= 32'b0;
            dividend <= 32'b0;
            remainder <= 33'b0;
            cout <= 6'd32;

        end else begin
            case(next_state)
                IDLE: begin 
                    result <= 32'b0;
                    rem <= 32'b0;
                    finish <= 1'b0;
                    x_abs_reg <= 32'b0;
                    y_abs_reg <= 32'b0;
                    divisor <= 32'b0;
                    divisor_n <= 32'b0;
                    dividend <= 32'b0;
                    cout <= 6'd32;
                    remainder <= 33'b0;
                end

                INIT: begin 
                    // 得到了除数 被除数的绝对值
                    result <= 32'b0;
                    rem <= 32'b0;
                    finish <= 1'b0;
                    x_abs_reg <= x_abs;
                    y_abs_reg <= y_abs;
                    
                end
                // 1. 第一次进入QUOT
                // 2. QUOT->QUOT

                // 1. 被除数位数 < 除数位数 0 0 直接INIT->DONE
                // 2. 被除数位数 == 除数位数 1次 1 1
                // 3. 
                QUOT: begin 
                    result <= 32'b0;
                    rem <= 32'b0;
                    finish <= 1'b0;
                    // INIT -> QUOT 得到了除数 被除数（规范化之后的）
                    if(current_state[1]) begin
                        divisor <= y_abs_reg;
                        divisor_n <= (~y_abs_reg + 1);
                        dividend <= x_abs_reg << shift_x;
                    // QUOT -> QUOT 迭代
                    end else if(current_state[2]) begin
                        {remainder, dividend} <= sub_result[32] ? {remainder[31:0], dividend[31:0],1'b0} : {sub_result[31:0],dividend[31:0],1'b1};   
                        cout <= cout - 6'b1;              
                    end

                end
                // QUOT -> FIX 得到最终的dividend
                FIX: begin 
                    {remainder, dividend} <= sub_result[32] ? {remainder[31:0], dividend[31:0],1'b0} : {sub_result[31:0],dividend[31:0],1'b1}; 
                end
                DONE: begin 
                    result <= {((shift == 6'd32) ? 32'b0 : s_abs) ^ {32{(sign & s_sign)}}} + {31'b0,(sign & s_sign)};
                    rem <= {((shift == 6'd32) ? x_abs_reg : r_abs) ^ {32{(sign & r_sign)}}} + {31'b0,(sign & r_sign)};
                    finish <= 1'b1;
                end

                default: begin
                    
                end
            endcase
        end
    end

    // get the abs of operation num
    sign_oppo oppo0(x, sign & x[31], x_abs);    
    sign_oppo oppo1(y, sign & y[31], y_abs); 

    // get the sign bit of result and rem
    assign s_sign = x[31] ^ y[31];
    assign r_sign = x[31]; 

    // leading zero detector 得到需要迭代的次数
    lzd_32 lzd0(y_abs, shift_y, zero_y);
    lzd_32 lzd1(x_abs, shift_x, zero_x);
    assign shift = (shift_x > shift_y || zero_y) ? 6'd32 : {1'b0,shift_x};

    // QUOT conbinational logic
    cla #(32,4) cla0 (
        .a(remainder[31:0]),
        .b(divisor_n),
        .cin(1'b0),
        .s(sub_result[31:0]),
        .co(div_cout)
    );

    full_adder adder0(
        .ai(remainder[32]),
        .bi(divisor_n[31]),
        .cin(div_cout),
        .result(sub_result[32]),
        .co()
    );

    assign final_shift = (cout <= shift);


    assign s_abs = dividend;
    assign r_abs = remainder[32:1];


    
    

endmodule