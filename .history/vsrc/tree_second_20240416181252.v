module tree_first #(parameter Treesize = `INPUTSIZE / `GROUPSIZE)(gp,Q_gp);
    input	[Treesize * 2 - 1:0]	gp;
	output	[Treesize * 2 - 1:0]	Q_gp;

    generate
        genvar i;
        // two groups
        if(Treesize == 2) begin
            assign Q_gp[1:0] = gp[1:0]; //Q[0:0]
            o_logic o1(
                .gp1(gp[1:0]),
                .gp2(gp[3:2]),
                .Q_gp(Q_gp[3:2])
            );
        end
        else begin
            wire        [Treesize * 2 - 1:0]	Q_temp;
            parallel_prefix_tree_first_half #(.Treesize(Treesize / 2)) recursion_lsbh(
                .q(q[Treesize - 1:0]),
                .r(r_temp[Treesize - 1:0])
            );

        end



    endgenerate

	
endmodule