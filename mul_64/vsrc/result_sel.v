// 生成部分积
module result_sel(x,neg,one,two,zero,p);
	input 		[64:0]	x;				
	input 		    	neg;
	input 		    	one;
	input 		    	two;
	input 		    	zero;
	output 		[127:0]	p;

    reg			[127:0]	p_temp;
	
	always @( *) begin
		if(one) begin
			p_temp = {{63{x[64]}}, x};
		end
		else if(two) begin
			p_temp = {{62{x[64]}}, x, 1'b0};
		end
		else if(zero) begin
			p_temp = 128'b0;
		end
		else begin
			p_temp = 128'b0;
		end
	end
	assign p = (neg == 1'b1) ? (~p_temp + 1) : p_temp;
endmodule