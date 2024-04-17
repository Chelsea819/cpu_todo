`include "define.v"
/* verilator lint_off UNOPTFLAT */
// use CLA to get the sum and GP of each group
module group_gp_generation#(parameter Groupsize = `GROUPSIZE)(a,b,cin,s,Q_gp);
    input	[Groupsize - 1:0]	a;
	input	[Groupsize - 1:0]	b;
	input				        cin;
	output	[Groupsize - 1:0]	s;
	output	[1:0]			    Q_gp; 

    wire	[2 * Groupsize - 1:0]   gp;
	wire	[Groupsize - 1:0]	    c;

    assign c[0] = cin;
    // get the sum and cin of each number in this group
    // get unit GP
    generate
        genvar i;
        for(i = 0; i < Groupsize; i = i + 1)    begin
            fa_cla fa(
                .a_i(a[i]),
                .b_i(b[i]),
                .cin(c[i]),
                .result(s[i]),
                .gp(gp[i*2+1 : i*2])
            );
            if(i != Groupsize - 1) begin
                assign c[i+1] = gp[i*2+1] | (gp[i*2] & c[i]);
            end
        end
        if(Groupsize == 1) begin
            assign Q_gp[0] = gp[0];
            assign Q_gp[1] = gp[1];
        end
        else if(Groupsize == 2) begin
            assign Q_gp[1] = gp[3] | (gp[1] & gp[2]);
            assign Q_gp[0] = gp[2] & gp[0];
        end
        else if(Groupsize == 4) begin
            assign Q_gp[1] = gp[7] | (gp[5] & gp[6]) | (gp[3] & gp[6] & gp[4]) | (gp[1] & gp[6] & gp[4] & gp[2]);
            assign Q_gp[0] = gp[6] & gp[4] & gp[2] & gp[0];
        end
        else if(Groupsize == 8) begin
            assign Q_gp[1] = gp[15] | (gp[13] & gp[14]) | (gp[11] & gp[14] & gp[12]) | (gp[9] & gp[14] & gp[12] & gp[10]) | (gp[7] & gp[14] & gp[12] & gp[10] & gp[8]) | (gp[5] & gp[14] & gp[12] & gp[10] & gp[8] & gp[6]) | (gp[3] & gp[14] & gp[12] & gp[10] & gp[8] & gp[6] & gp[4]) | (gp[1] & gp[14] & gp[12] & gp[10] & gp[8] & gp[6] & gp[4] & gp[2]);
            assign Q_gp[0] = gp[14] & gp[12] & gp[10] & gp[8] & gp[6] & gp[4] & gp[2] & gp[0];
        end
        else
            assign Q_gp = 2'b0;
    endgenerate
/* verilator lint_off UNOPTFLAT */
endmodule