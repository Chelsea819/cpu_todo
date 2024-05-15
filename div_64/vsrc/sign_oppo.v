module sign_oppo #(width = 64) (in,sign,in_abs);
    input   [width-1:0]     in;
    input                   sign;
    output  [width-1:0]     in_abs;

    assign in_abs = {in ^ {width{sign}}} + {{(width-1){1'b0}},sign};
endmodule