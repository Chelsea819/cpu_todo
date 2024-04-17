module group_gq_generation#(parameter Groupsize = `GROUPSIZE)(a,b,cin,result,gp);
    input	[Groupsize - 1:0]	a;
	input	[Groupsize - 1:0]	b;
	input				        cin;
	output	[Groupsize - 1:0]	s;
	output	[1:0]			    Q_gp; 

    wire	[2 * Groupsize - 1:0]   gq;
	wire	[Groupsize - 1:0]	    c;

    assign c[0] = cin;

    generate
        genvar i;
        for(i = 0; i < Groupsize; i = i + 1)    begin
            fa_cla fa(
                .a_i(a[i]),
                .b_i(b[i]),
                .cin(c[i]),
                .result(),
                .gp()
            );
        end


    endgenerate


endmodule