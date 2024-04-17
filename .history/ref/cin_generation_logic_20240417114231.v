`define INPUTSIZE 64		//set the input size n
`define GROUPSIZE 8		//set the group size = 1, 2, 4 or 8

module cin_generation_logic(r,c0,cin);

	input	[1:0]	r;
	input		c0;
	output		cin;
	
	assign cin = (r[0] & c0) | r[1];
	
endmodule