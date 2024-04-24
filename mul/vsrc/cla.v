module cla #(width=128,size=4)(a,b,cin,s,q);

	input 	[width-1:0]		a;
	input 	[width-1:0]		b;
	input 					cin;
	output 	[width-1:0]		s;
	output					co;

    wire    [width/size:0]       temp;

    assign  temp[0] = cin;
    assign  cout = temp[width/size];

	genvar i;
	generate
		for(i = 0; i < width/size; i = i+size) begin
			cla_part cla_part0(
				.a(a[i+size - 1:i]),
				.b(b[i+size - 1:i]),
                .cin(temp[i]),
				.s(s[i+size - 1:i]),
				.co(temp[i+size])
			);
		end
	endgenerate
	

endmodule