module cla_part#(width=4)(a,b,cin,s,q);

	input 	[width-1:0]		a;
	input 	[width-1:0]		b;
	input 					cin;
	output 	[width-1:0]		s;
	output					co;

	wire 	[width-1:0]		p;
	wire 	[width:0]		c;
	wire 	[width-1:0]		g;
	
	assign c[0] = cin;
	assign co = c[width];

	carry_generate carry0(
		.p(p),
		.g(g),
		.c(c)
	);

	sum_generate sum0(
		.p(p),
		.c(c[width-1:0]),
		.s(s)
	);

	genvar i;
	generate
		for(i = 0; i < width; i=i+1) begin
			pg_generate pg0(
				.a(a[i]),
				.b(b[i]),
				.p(p[i]),
				.g(g[i])
			);
		end
	endgenerate
	

endmodule