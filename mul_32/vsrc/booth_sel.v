
module booth_sel(src,neg,zero,one,two);
	
	input	[2:0]	src;
	output 		    neg;
	output 		    zero;
	output 		    one;
	output 		    two;
	
	assign neg = src[2];
	assign zero = ((src == 3'b000) || (src == 3'b111));
	assign two = ((src == 3'b100) || (src == 3'b011));
	assign one = !zero & !two;

endmodule