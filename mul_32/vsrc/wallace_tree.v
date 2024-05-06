// 生成部分积
module wallace_tree #(result_width = 64) (part_result,result);
	input 		[63:0]	part_result [16:0];	
	output 		[63:0]	result;

    wire        [63:0]  s_lev0_1;
    wire        [63:0]  c_lev0_1;
    wire        [63:0]  s_lev0_2;
    wire        [63:0]  c_lev0_2;
    wire        [63:0]  s_lev0_3;
    wire        [63:0]  c_lev0_3;
    wire        [63:0]  s_lev0_4;
    wire        [63:0]  c_lev0_4;
    wire        [63:0]  s_lev0_5;
    wire        [63:0]  c_lev0_5;

    wire        [63:0]  s_lev1_1;
    wire        [63:0]  c_lev1_1;
    wire        [63:0]  s_lev1_2;
    wire        [63:0]  c_lev1_2;
    wire        [63:0]  s_lev1_3;
    wire        [63:0]  c_lev1_3;
    wire        [63:0]  s_lev1_4;
    wire        [63:0]  c_lev1_4;

    wire        [63:0]  s_lev2_1;
    wire        [63:0]  c_lev2_1;
    wire        [63:0]  s_lev2_2;
    wire        [63:0]  c_lev2_2;

    wire        [63:0]  s_lev3_1;
    wire        [63:0]  c_lev3_1;
    wire        [63:0]  s_lev3_2;
    wire        [63:0]  c_lev3_2;

    wire        [63:0]  s_lev4_1;
    wire        [63:0]  c_lev4_1;

    wire        [63:0]  s_lev5_1;
    wire        [63:0]  c_lev5_1;

    //level0
	fa_csa #(.width(result_width)) csa0_0(
        .ai(part_result[0]),
        .bi(part_result[1] << 2),
        .ci(part_result[2] << 4),
        .result(s_lev0_1),
        .co(c_lev0_1)
    );
    fa_csa #(.width(result_width)) csa0_1(
        .ai(part_result[3] << 6),
        .bi(part_result[4] << 8),
        .ci(part_result[5] << 10),
        .result(s_lev0_2),
        .co(c_lev0_2)
    );
    fa_csa #(.width(result_width)) csa0_2(
        .ai(part_result[6] << 12),
        .bi(part_result[7] << 14),
        .ci(part_result[8] << 16),
        .result(s_lev0_3),
        .co(c_lev0_3)
    );
    fa_csa #(.width(result_width)) csa0_3(
        .ai(part_result[9] << 18),
        .bi(part_result[10] << 20),
        .ci(part_result[11] << 22),
        .result(s_lev0_4),
        .co(c_lev0_4)
    );
    fa_csa #(.width(result_width)) csa0_4(
        .ai(part_result[12] << 24),
        .bi(part_result[13] << 26),
        .ci(part_result[14] << 28),
        .result(s_lev0_5),
        .co(c_lev0_5)
    );

    //level1
	fa_csa #(.width(result_width)) csa1_0(
        .ai(s_lev0_1),
        .bi(c_lev0_1 << 1),
        .ci(s_lev0_2),
        .result(s_lev1_1),
        .co(c_lev1_1)
    );
    fa_csa #(.width(result_width)) csa1_1(
        .ai(c_lev0_2 << 1),
        .bi(s_lev0_3),
        .ci(c_lev0_3 << 1),
        .result(s_lev1_2),
        .co(c_lev1_2)
    );
    fa_csa #(.width(result_width)) csa1_2(
        .ai(s_lev0_4),
        .bi(c_lev0_4 << 1),
        .ci(s_lev0_5),
        .result(s_lev1_3),
        .co(c_lev1_3)
    );
    fa_csa #(.width(result_width)) csa1_3(
        .ai(c_lev0_5 << 1),
        .bi(part_result[15] << 30),
        .ci(part_result[16] << 32),
        .result(s_lev1_4),
        .co(c_lev1_4)
    );
    

    //level2
	fa_csa #(.width(result_width)) csa2_0(
        .ai(s_lev1_1),
        .bi(c_lev1_1 << 1),
        .ci(s_lev1_2),
        .result(s_lev2_1),
        .co(c_lev2_1)
    );
    fa_csa #(.width(result_width)) csa2_1(
        .ai(c_lev1_2 << 1),
        .bi(s_lev1_3),
        .ci(c_lev1_3 << 1),
        .result(s_lev2_2),
        .co(c_lev2_2)
    );
    

    //level3
	fa_csa #(.width(result_width)) csa3_0(
        .ai(c_lev2_1 << 1),
        .bi(s_lev2_1),
        .ci(c_lev2_2 << 1),
        .result(s_lev3_1),
        .co(c_lev3_1)
    );
    fa_csa #(.width(result_width)) csa3_1(
        .ai(s_lev2_2),
        .bi(s_lev1_4),
        .ci(c_lev1_4 << 1),
        .result(s_lev3_2),
        .co(c_lev3_2)
    );


    //level4
	fa_csa #(.width(result_width)) csa4_0(
        .ai(s_lev3_1),
        .bi(c_lev3_1 << 1),
        .ci(s_lev3_2),
        .result(s_lev4_1),
        .co(c_lev4_1)
    );

    //level5
	fa_csa #(.width(result_width)) csa5_0(
        .ai(c_lev3_2 << 1),
        .bi(s_lev4_1),
        .ci(c_lev4_1 << 1),
        .result(s_lev5_1),
        .co(c_lev5_1)
    );


    cla #(.width(result_width),.size(4)) cla0(
        .a(s_lev5_1),
        .b(c_lev5_1 << 1),
        .cin(1'b0),
        .s(result),
        .co()
    );
    

    
endmodule