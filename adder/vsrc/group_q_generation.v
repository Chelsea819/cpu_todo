`include "define.v"
/* verilator lint_off UNOPTFLAT */
module group_q_generation #(parameter Groupsize = `GROUPSIZE)(a,b,cin,s,qg);

	input	[Groupsize - 1:0]	a;
	input	[Groupsize - 1:0]	b;
	input				cin;
	output	[Groupsize - 1:0]	s;
	output	[1:0]			qg;
	
	wire	[2 * Groupsize - 1:0]	q;
	wire	[Groupsize - 1:0]	c;
	
	assign c[0] = cin;
	
	generate
	genvar i;
	for(i = 0;i < Groupsize;i = i + 1) begin: parallel_FA_CLA_prefix
		FA_CLA_prefix f(.a(a[i]),
						.b(b[i]),
						.cin(c[i]),
						.s(s[i]),
						.q(q[i * 2 + 1:i * 2]));
		if(i != Groupsize - 1)begin: special_case
			assign c[i + 1] = q[i * 2 + 1] | q[i * 2] & c[i];
		end
	end
	
	//group q generation based on the Groupsize
	if(Groupsize == 1) begin: case_gs1
		assign qg[1] = q[1];
		assign qg[0] = q[0];
	end
	else if(Groupsize == 2) begin: case_gs2
		assign qg[1] = q[3] | (q[1] & q[2]);
		assign qg[0] = q[2] & q[0];
	end
	else if(Groupsize == 4) begin: case_gs4
		assign qg[1] = q[7] | (q[5] & q[6]) | (q[3] & q[6] & q[4]) | (q[1] & q[6] & q[4] & q[2]);
		assign qg[0] = q[6] & q[4] & q[2] & q[0];
	end
	else if(Groupsize == 8) begin: case_gs8
		assign qg[1] = q[15] | (q[13] & q[14]) | (q[11] & q[14] & q[12]) | (q[9] & q[14] & q[12] & q[10]) | (q[7] & q[14] & q[12] & q[10] & q[8]) | (q[5] & q[14] & q[12] & q[10] & q[8] & q[6]) | (q[3] & q[14] & q[12] & q[10] & q[8] & q[6] & q[4]) | (q[1] & q[14] & q[12] & q[10] & q[8] & q[6] & q[4] & q[2]);
		assign qg[0] = q[14] & q[12] & q[10] & q[8] & q[6] & q[4] & q[2] & q[0];
	end
	endgenerate
	/* verilator lint_on UNOPTFLAT */
endmodule