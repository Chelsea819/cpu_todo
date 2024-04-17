// o arithmasim
module o_logic(gp_l,gp_h,Q_gp);
    input	[1:0]	gp_l;
	input	[1:0]	gp_h;
	output	[1:0]	Q_gp;

    assign Q_gp[1] = gp_h[1] | (gp_l[1] & gp_h[0]);
    assign Q_gp[0] = gp1[0] & gp2[0];

endmodule