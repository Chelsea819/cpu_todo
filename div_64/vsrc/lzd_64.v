module lzd_64 (
    input [63:0] in,
    output [5:0] out,
    output       zero
);
    wire [1:0] z;
    wire [4:0] out_3_0 [1:0];
    lzd_32 lzd_32_0(in[63:32], out_3_0[0], z[0]);
    lzd_32 lzd_32_1(in[31: 0], out_3_0[1], z[1]);

    assign out[5] = z[0];
    assign out[4:0] = {5{~z[0]}} & out_3_0[0] |
                      {5{ z[0]}} & out_3_0[1];
    assign zero = z[0] & z[1];

endmodule