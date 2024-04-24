module sum_generate#(width=4)(p,s,c);

	input 	[width-1:0]		p;
	input 	[width-1:0]		c;
    output 	[width-1:0]		s;
	
    genvar i;
    for(i = 0; i < width; i = i + 1) begin
        s[i] = c[i] ^ p[i];
    end
endmodule