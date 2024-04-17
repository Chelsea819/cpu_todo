// 得到 70 66 50 44 30 22 10 00 序列

module tree_first #(parameter Treesize = `INPUTSIZE / `GROUPSIZE)(gp,Q_gp);
    input	[Treesize * 2 - 1:0]	gp;
	output	[Treesize * 2 - 1:0]	Q_gp;

    generate
        genvar i;
        // 得到 76 66 54 44 32 22 10 00
        // two groups
        if(Treesize == 2) begin
            assign Q_gp[1:0] = gp[1:0]; //Q[0:0]
            o_logic o1(     // Q[1:0]
                .gp_l(gp[1:0]),
                .gp_h(gp[3:2]),
                .Q_gp(Q_gp[3:2])
            );
        end
        else begin
            wire        [Treesize * 2 - 1:0]	Q_temp;
            tree_first #(.Treesize(Treesize / 2)) recursion1(
                .gp(gp[Treesize - 1:0]),
                .Q_gp(Q_temp[Treesize - 1:0])
            );
            tree_first #(.Treesize(Treesize / 2)) recursion2(
                .gp(gp[Treesize * 2 - 1:Treesize]),
                .Q_gp(Q_temp[Treesize * 2 - 1:Treesize])
            );
            for(i = 0;i < Treesize * 2;i = i + 2) begin
                if(i != Treesize * 2 - 2) begin
                    assign Q_gp[i + 1:i] = Q_temp[i + 1:i];
                end
                else begin: parallel_stitch_up_produce
                    o_logic o2(.gp_l(Q_temp[Treesize - 1:Treesize - 2]),
                                .gp_h(Q_temp[Treesize * 2 - 1:Treesize * 2 - 2]),
                                .Q_gp(Q_gp[Treesize * 2 - 1:Treesize * 2 - 2]));
			    end
		    end

        end

    endgenerate

	
endmodule