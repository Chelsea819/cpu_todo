`include "define.v"
module Brent_Kung_Adder(A,B,S,c0);

	input	[`INPUTSIZE - 1:0]	A;
	input	[`INPUTSIZE - 1:0]	B;
	input						c0;
	output	[`INPUTSIZE:0]		S;
	wire	[`INPUTSIZE:0]		S_temp;
	wire	[`INPUTSIZE / `GROUPSIZE * 2 - 1:0]	r_temp;
	wire	[`INPUTSIZE / `GROUPSIZE * 2 - 1:0]	r;
	wire	[`INPUTSIZE / `GROUPSIZE:0]		cin;
	wire	[`INPUTSIZE / `GROUPSIZE * 2 - 1:0]	q;
	
	assign cin[0] = c0;
	
	generate
	genvar i;
	for(i = 0;i < `INPUTSIZE / `GROUPSIZE;i = i + 1) begin: parallel_FA_CLA_prefix
		group_q_generation #(.Groupsize(`GROUPSIZE))
		f(.a(A[`GROUPSIZE * (i + 1) - 1:`GROUPSIZE * i]),
		  .b(B[`GROUPSIZE * (i + 1) - 1:`GROUPSIZE * i]),
		  .cin(cin[i]),
		  .s(S_temp[`GROUPSIZE * (i + 1) - 1:`GROUPSIZE * i]),
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
							   .c0(c0),
							   .cin(cin[i + 1]));
	end
	
	assign S_temp[`INPUTSIZE] = cin[`INPUTSIZE / `GROUPSIZE];

	assign S = (S_temp[`INPUTSIZE -1] == 1'b1) ? {S_temp[`INPUTSIZE:`INPUTSIZE -1],(~S_temp[`INPUTSIZE -2:0] + 1)} 
				: S_temp;

	
	endgenerate
	
	// if() begin
	// 	S = {S_temp[`INPUTSIZE:`INPUTSIZE -1],(~S_temp[`INPUTSIZE -2:0] + 1)} ;
	// end
	// else begin
	// 	S = S_temp;
	// end
	
endmodule
