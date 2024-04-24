// 生成部分积
module wallace_tree (part_result,result);
	input 		[127:0]	part_result [32:0];	
	output 		[127:0]	result;

    wire        [127:0]  s_lev0_1;
    wire        [127:0]  c_lev0_1;
    wire        [127:0]  s_lev0_2;
    wire        [127:0]  c_lev0_2;
    wire        [127:0]  s_lev0_3;
    wire        [127:0]  c_lev0_3;
    wire        [127:0]  s_lev0_4;
    wire        [127:0]  c_lev0_4;
    wire        [127:0]  s_lev0_5;
    wire        [127:0]  c_lev0_5;
    wire        [127:0]  s_lev0_6;
    wire        [127:0]  c_lev0_6;
    wire        [127:0]  s_lev0_7;
    wire        [127:0]  c_lev0_7;
    wire        [127:0]  s_lev0_8;
    wire        [127:0]  c_lev0_8;
    wire        [127:0]  s_lev0_9;
    wire        [127:0]  c_lev0_9;
    wire        [127:0]  s_lev0_10;
    wire        [127:0]  c_lev0_10;
    wire        [127:0]  s_lev0_11;
    wire        [127:0]  c_lev0_11;

    wire        [127:0]  s_lev1_1;
    wire        [127:0]  c_lev1_1;
    wire        [127:0]  s_lev1_2;
    wire        [127:0]  c_lev1_2;
    wire        [127:0]  s_lev1_3;
    wire        [127:0]  c_lev1_3;
    wire        [127:0]  s_lev1_4;
    wire        [127:0]  c_lev1_4;
    wire        [127:0]  s_lev1_5;
    wire        [127:0]  c_lev1_5;
    wire        [127:0]  s_lev1_6;
    wire        [127:0]  c_lev1_6;
    wire        [127:0]  s_lev1_7;
    wire        [127:0]  c_lev1_7;

    wire        [127:0]  s_lev2_1;
    wire        [127:0]  c_lev2_1;
    wire        [127:0]  s_lev2_2;
    wire        [127:0]  c_lev2_2;
    wire        [127:0]  s_lev2_3;
    wire        [127:0]  c_lev2_3;
    wire        [127:0]  s_lev2_4;
    wire        [127:0]  c_lev2_4;
    wire        [127:0]  s_lev2_5;
    wire        [127:0]  c_lev2_5;

    wire        [127:0]  s_lev3_1;
    wire        [127:0]  c_lev3_1;
    wire        [127:0]  s_lev3_2;
    wire        [127:0]  c_lev3_2;
    wire        [127:0]  s_lev3_3;
    wire        [127:0]  c_lev3_3;

    wire        [127:0]  s_lev4_1;
    wire        [127:0]  c_lev4_1;
    wire        [127:0]  s_lev4_2;
    wire        [127:0]  c_lev4_2;

    wire        [127:0]  s_lev5_1;
    wire        [127:0]  c_lev5_1;

    wire        [127:0]  s_lev6_1;
    wire        [127:0]  c_lev6_1;

    //level0
	fa_csa #(.width(128)) csa0_0(
        .ai(part_result[0]),
        .bi(part_result[1] << 2),
        .ci(part_result[2] << 4),
        .result(s_lev0_1),
        .co(c_lev0_1)
    );
    fa_csa #(.width(128)) csa0_1(
        .ai(part_result[3] << 6),
        .bi(part_result[4] << 8),
        .ci(part_result[5] << 10),
        .result(s_lev0_2),
        .co(c_lev0_2)
    );
    fa_csa #(.width(128)) csa0_2(
        .ai(part_result[6] << 12),
        .bi(part_result[7] << 14),
        .ci(part_result[8] << 16),
        .result(s_lev0_3),
        .co(c_lev0_3)
    );
    fa_csa #(.width(128)) csa0_3(
        .ai(part_result[9] << 18),
        .bi(part_result[10] << 20),
        .ci(part_result[11] << 22),
        .result(s_lev0_4),
        .co(c_lev0_4)
    );
    fa_csa #(.width(128)) csa0_4(
        .ai(part_result[12] << 24),
        .bi(part_result[13] << 26),
        .ci(part_result[14] << 28),
        .result(s_lev0_5),
        .co(c_lev0_5)
    );
    fa_csa #(.width(128)) csa0_5(
        .ai(part_result[15] << 30),
        .bi(part_result[16] << 32),
        .ci(part_result[17] << 34),
        .result(s_lev0_6),
        .co(c_lev0_6)
    );
    fa_csa #(.width(128)) csa0_6(
        .ai(part_result[18] << 36),
        .bi(part_result[19] << 38),
        .ci(part_result[20] << 40),
        .result(s_lev0_7),
        .co(c_lev0_7)
    );
    fa_csa #(.width(128)) csa0_7(
        .ai(part_result[21] << 42),
        .bi(part_result[22] << 44),
        .ci(part_result[23] << 46),
        .result(s_lev0_8),
        .co(c_lev0_8)
    );
    fa_csa #(.width(128)) csa0_8(
        .ai(part_result[24] << 48),
        .bi(part_result[25] << 50),
        .ci(part_result[26] << 52),
        .result(s_lev0_9),
        .co(c_lev0_9)
    );
    fa_csa #(.width(128)) csa0_9(
        .ai(part_result[27] << 54),
        .bi(part_result[28] << 56),
        .ci(part_result[29] << 58),
        .result(s_lev0_10),
        .co(c_lev0_10)
    );
    fa_csa #(.width(128)) csa0_10(
        .ai(part_result[30] << 60),
        .bi(part_result[31] << 62),
        .ci(part_result[32] << 64),
        .result(s_lev0_11),
        .co(c_lev0_11)
    );

    //level1
	fa_csa #(.width(128)) csa1_0(
        .ai(s_lev0_1),
        .bi(c_lev0_1 << 1),
        .ci(s_lev0_2),
        .result(s_lev1_1),
        .co(c_lev1_1)
    );
    fa_csa #(.width(128)) csa1_1(
        .ai(c_lev0_2 << 1),
        .bi(s_lev0_3),
        .ci(c_lev0_3 << 1),
        .result(s_lev1_2),
        .co(c_lev1_2)
    );
    fa_csa #(.width(128)) csa1_2(
        .ai(s_lev0_4),
        .bi(c_lev0_4 << 1),
        .ci(s_lev0_5),
        .result(s_lev1_3),
        .co(c_lev1_3)
    );
    fa_csa #(.width(128)) csa1_3(
        .ai(c_lev0_5 << 1),
        .bi(s_lev0_6),
        .ci(c_lev0_6 << 1),
        .result(s_lev1_4),
        .co(c_lev1_4)
    );
    fa_csa #(.width(128)) csa1_4(
        .ai(s_lev0_7),
        .bi(c_lev0_7 << 1),
        .ci(s_lev0_8),
        .result(s_lev1_5),
        .co(c_lev1_5)
    );
    fa_csa #(.width(128)) csa1_5(
        .ai(c_lev0_8 << 1),
        .bi(s_lev0_9),
        .ci(c_lev0_9 << 1),
        .result(s_lev1_6),
        .co(c_lev1_6)
    );
    fa_csa #(.width(128)) csa1_6(
        .ai(c_lev0_10 << 1),
        .bi(s_lev0_10),
        .ci(s_lev0_11),
        .result(s_lev1_7),
        .co(c_lev1_7)
    );

    //level2
	fa_csa #(.width(128)) csa2_0(
        .ai(s_lev1_1),
        .bi(c_lev1_1 << 1),
        .ci(s_lev1_2),
        .result(s_lev1_1),
        .co(c_lev1_1)
    );
    fa_csa #(.width(128)) csa2_1(
        .ai(c_lev1_2 << 1),
        .bi(s_lev1_3),
        .ci(c_lev1_3 << 1),
        .result(s_lev1_2),
        .co(c_lev1_2)
    );
    fa_csa #(.width(128)) csa2_2(
        .ai(s_lev1_4),
        .bi(c_lev1_4 << 1),
        .ci(s_lev1_5),
        .result(s_lev1_3),
        .co(c_lev1_3)
    );
    fa_csa #(.width(128)) csa2_3(
        .ai(c_lev1_5 << 1),
        .bi(s_lev1_6),
        .ci(c_lev1_6 << 1),
        .result(s_lev1_4),
        .co(c_lev1_4)
    );
    fa_csa #(.width(128)) csa2_4(
        .ai(s_lev1_7),
        .bi(c_lev1_7 << 1),
        .ci(c_lev0_11 << 1),
        .result(s_lev1_5),
        .co(c_lev1_5)
    );

    //level3
	fa_csa #(.width(128)) csa3_0(
        .ai(c_lev2_1 << 1),
        .bi(s_lev2_2),
        .ci(c_lev2_2 << 1),
        .result(s_lev3_1),
        .co(c_lev3_1)
    );
    fa_csa #(.width(128)) csa3_1(
        .ai(s_lev2_3),
        .bi(c_lev2_3 << 1),
        .ci(s_lev2_4),
        .result(s_lev3_2),
        .co(c_lev3_2)
    );
    fa_csa #(.width(128)) csa3_2(
        .ai(c_lev2_4 << 1),
        .bi(s_lev2_5),
        .ci(c_lev2_5 << 1),
        .result(s_lev3_3),
        .co(c_lev3_3)
    );

    //level4
	fa_csa #(.width(128)) csa4_0(
        .ai(s_lev2_1),
        .bi(s_lev3_1),
        .ci(c_lev3_1 << 1),
        .result(s_lev4_1),
        .co(c_lev4_1)
    );
    fa_csa #(.width(128)) csa4_1(
        .ai(s_lev3_2),
        .bi(c_lev3_2 << 1),
        .ci(s_lev3_3),
        .result(s_lev4_2),
        .co(c_lev4_2)
    );

    //level5
	fa_csa #(.width(128)) csa5_0(
        .ai(s_lev4_2),
        .bi(c_lev4_2 << 1),
        .ci(c_lev3_3 << 1),
        .result(s_lev5_1),
        .co(c_lev5_1)
    );

    //level6
	fa_csa #(.width(128)) csa6_0(
        .ai(c_lev4_1 << 1),
        .bi(s_lev5_1),
        .ci(c_lev5_1 << 1),
        .result(s_lev6_1),
        .co(c_lev6_1)
    );

    //level7
	fa_csa #(.width(128)) csa7_0(
        .ai(s_lev4_1),
        .bi(s_lev6_1),
        .ci(c_lev6_1 << 1),
        .result(s_lev7_1),
        .co(c_lev7_1)
    );

    cla #(.width(128),.size(4)) cla0(
        .a(s_lev7_1),
        .b(c_lev7_1),
        .cin(1'b0),
        .s(result),
        .co()
    );
    

    
endmodule