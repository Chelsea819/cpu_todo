module group_gq_generation#(parameter Groupsize = `GROUPSIZE)(a,b,cin,result,gp);
    input	[Groupsize - 1:0]	a;
	input	[Groupsize - 1:0]	b;
	input				        cin;
	output	[Groupsize - 1:0]	s;
	output	[1:0]			    Q_gp; 

    wire	[2 * Groupsize - 1:0]   gq;
	wire	[Groupsize - 1:0]	    c;

    assign c[0] = cin;
    // get the sum and cin of each number in this group
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
    endgenerate


endmodule