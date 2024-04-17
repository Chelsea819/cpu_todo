module o_logic();
    input	[1:0]	gp1;
	input	[1:0]	gp2;
	output	[1:0]	Q_gp;

    assign Q_gp[0] = gp1[1] | (gp2[1] & gp1[0]);
    assign Q_gp[1] = gp1[0] & gp2[0];


endmodule