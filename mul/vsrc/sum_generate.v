module sum_generate#(width=4)(p,s,c);

	input 	[width-1:0]		p;
	input 	[width-1:0]		c;
    output 	[width-1:0]		s;

    assign s = c ^ p;
endmodule