`define INPUTSIZE 64		//set the input size n
`define GROUPSIZE 8		//set the group size = 1, 2, 4 or 8

module Brent_Kung_Adder(a,b,result,c0,cout);

	input	[`INPUTSIZE - 1:0]	a;
	input	[`INPUTSIZE - 1:0]	b;
	input						c0;
	output						cout;
	output	[`INPUTSIZE - 1:0]	result;
	
	wire	[`INPUTSIZE / `GROUPSIZE * 2 - 1:0]	r_temp;
	wire	[`INPUTSIZE / `GROUPSIZE * 2 - 1:0]	r;
	wire	[`INPUTSIZE / `GROUPSIZE:0]		cin;
	wire	[`INPUTSIZE / `GROUPSIZE * 2 - 1:0]	q;
	
	assign cin[0] = 1'b0;
	
	generate
	genvar i;
	for(i = 0;i < `INPUTSIZE / `GROUPSIZE;i = i + 1) begin: parallel_FA_CLA_prefix
		group_q_generation #(.Groupsize(`GROUPSIZE))
		f(.a(A[`GROUPSIZE * (i + 1) - 1:`GROUPSIZE * i]),
		  .b(B[`GROUPSIZE * (i + 1) - 1:`GROUPSIZE * i]),
		  .cin(cin[i]),
		  .s(S[`GROUPSIZE * (i + 1) - 1:`GROUPSIZE * i]),
		  .qg(q[i * 2 + 1:i * 2]));
	end

	parallel_prefix_tree_first_half #(.Treesize(`INPUTSIZE / `GROUPSIZE))
	t1(.q(q[`INPUTSIZE / `GROUPSIZE * 2 - 1:0]),
	   .r(r_temp[`INPUTSIZE / `GROUPSIZE * 2 - 1:0]));
	parallel_prefix_tree_second_half #(.Treesize(`INPUTSIZE / `GROUPSIZE))
	t2(.q(r_temp[`INPUTSIZE / `GROUPSIZE * 2 - 1:0]),
	   .r(r[`INPUTSIZE / `GROUPSIZE * 2 - 1:0]));
	
	for(i = 0;i < `INPUTSIZE / `GROUPSIZE;i = i + 1) begin: cin_generation
		cin_generation_logic f(.r(r[2 * i + 1:2 * i]),
							   .c0(1'b0),
							   .cin(cin[i + 1]));
	end
	
	assign S[`INPUTSIZE] = cin[`INPUTSIZE / `GROUPSIZE];
	
	endgenerate
	
endmodule