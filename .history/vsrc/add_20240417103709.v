
`include "define.v"
module add(a,b,result,c0);

	input	[`INPUTSIZE - 1:0]	a;
	input	[`INPUTSIZE - 1:0]	b;
	input						c0;
	output	[`INPUTSIZE:0]	result;
	
	wire	[`INPUTSIZE / `GROUPSIZE * 2 - 1:0]	Q_temp;
	wire	[`INPUTSIZE / `GROUPSIZE * 2 - 1:0]	Q_gp;
	wire	[`INPUTSIZE / `GROUPSIZE:0]			cin;
	wire	[`INPUTSIZE / `GROUPSIZE * 2 - 1:0]	q;
	
	assign cin[0] = c0;
	
	generate
	genvar i;
	for(i = 0;i < `INPUTSIZE / `GROUPSIZE;i = i + 1) begin: parallel_FA_CLA_prefix
		group_gp_generation #(.Groupsize(`GROUPSIZE))
		f(.a(A[`GROUPSIZE * (i + 1) - 1:`GROUPSIZE * i]),
		  .b(B[`GROUPSIZE * (i + 1) - 1:`GROUPSIZE * i]),
		  .cin(cin[i]),
		  .s(result[`GROUPSIZE * (i + 1) - 1:`GROUPSIZE * i]),
		  .Q_gp(q[i * 2 + 1:i * 2]));
	end

	tree_first #(.Treesize(`INPUTSIZE / `GROUPSIZE))
	t1(.gp(q[`INPUTSIZE / `GROUPSIZE * 2 - 1:0]),
	   .Q_gp(Q_temp[`INPUTSIZE / `GROUPSIZE * 2 - 1:0]));
	tree_second #(.Treesize(`INPUTSIZE / `GROUPSIZE))
	t2(.gp(Q_temp[`INPUTSIZE / `GROUPSIZE * 2 - 1:0]),
	   .Q_gp(Q_gp[`INPUTSIZE / `GROUPSIZE * 2 - 1:0]));
	
	for(i = 0;i < `INPUTSIZE / `GROUPSIZE;i = i + 1) begin: cin_generation
		cin_logic f(.Q_gp(Q_gp[2 * i + 1:2 * i]),
							   .c0(c0),
							   .cin(cin[i + 1]));
	end
	
	assign result[`INPUTSIZE] = cin[`INPUTSIZE / `GROUPSIZE];
	
	endgenerate
	
endmodule