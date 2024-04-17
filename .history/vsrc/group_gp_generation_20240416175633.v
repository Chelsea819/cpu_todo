module group_gq_generation#(parameter Groupsize = `GROUPSIZE)(a,b,cin,result,gp);
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
            assign Q_gp[1] = q[3] | (q[1] & q[2]);
            assign Q_gp[0] = q[2] & q[0];
        end
        else if(Groupsize == 4) begin
            assign Q_gp[1] = q[7] | (q[5] & q[6]) | (q[3] & q[6] & q[4]) | (q[1] & q[6] & q[4] & q[2]);
            assign Q_gp[0] = q[6] & q[4] & q[2] & q[0];
        end
        else if(Groupsize == 8) begin
            assign Q_gp[1] = q[15] | (q[13] & q[14]) | (q[11] & q[14] & q[12]) | (q[9] & q[14] & q[12] & q[10]) | (q[7] & q[14] & q[12] & q[10] & q[8]) | (q[5] & q[14] & q[12] & q[10] & q[8] & q[6]) | (q[3] & q[14] & q[12] & q[10] & q[8] & q[6] & q[4]) | (q[1] & q[14] & q[12] & q[10] & q[8] & q[6] & q[4] & q[2]);
            assign Q_gp[0] = q[14] & q[12] & q[10] & q[8] & q[6] & q[4] & q[2] & q[0];
        end
        else
            assign Q_gp = 2'b0;
    endgenerate

endmodule