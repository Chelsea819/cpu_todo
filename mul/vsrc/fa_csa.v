module fa_csa #(width=64)(ai,bi,ci,result,co);
	input 	[width-1:0]	    ai;
	input 	[width-1:0]	    bi;
	input 	[width-1:0]	    ci;
	output	[width-1:0]		result;
	output	[width-1:0]		co;
	
	genvar i;
	generate
		for(i = 0; i < width; i = i + 1'b1) begin
			full_adder adder0(
				.ai(ai[i]),
				.bi(bi[i]),
				.cin(ci[i]),
				.result(result[i]),
				.co(co[i])
			);
		end
	endgenerate
endmodule