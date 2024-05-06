// 生成部分积
module result_sel(x,neg,one,two,zero,p);
	input 		[32:0]	x;				
	input 		    	neg;
	input 		    	one;
	input 		    	two;
	input 		    	zero;
	output 		[63:0]	p;

    reg			[63:0]	p_temp;
	
	always @( *) begin
		if(one) begin
			p_temp = {{31{x[32]}}, x};
		end
		else if(two) begin
			p_temp = {{30{x[32]}}, x, 1'b0};
		end
		else if(zero) begin
			p_temp = 64'b0;
		end
		else begin
			p_temp = 64'b0;
		end
	end
	assign p = (neg == 1'b1) ? (~p_temp + 1) : p_temp;
endmodule