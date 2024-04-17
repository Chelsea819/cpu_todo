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
            tree_first #(.Treesize(Treesize / 2)) recursion1(
                .gp(gp[Treesize - 1:0]),
                .Q_gp(Q_gp[Treesize - 1:0])
            );
            tree_first #(.Treesize(Treesize / 2)) recursion2(
                .gp(gp[Treesize * 2 - 1:Treesize]),
                .Q_gp(Q_gp[Treesize * 2 - 1:Treesize])
            );

        end



    endgenerate

	
endmodule