module tree_second #(parameter Treesize = `INPUTSIZE / `GROUPSIZE)(gp,Q_gp);
    input	[Treesize * 2 - 1:0]	gp;
	output	[Treesize * 2 - 1:0]	Q_gp;

    wire	[16 * ($clog2(Treesize) - 1) - 1:0]	Q_temp;
	
	assign Q_temp[16 - 1:0] = q[16 - 1:0];
	
	generate
	genvar i, j;
	for(i = 0;i < $clog2(Treesize) - 2;i = i + 1) begin
		assign Q_temp[16 * (i + 1) + ((Treesize / (2 ** i)) - 1 - 2 ** ($clog2(Treesize / 4) - i)) * 2 - 1:16 * (i + 1)] = Q_temp[16 * i + ((Treesize / (2 ** i)) - 1 - 2 ** ($clog2(Treesize / 4) - i)) * 2 - 1:16 * i];
		for(j = (Treesize / (2 ** i)) - 1 - 2 ** ($clog2(Treesize / 4) - i); j < Treesize; j = j + 2 ** ($clog2(Treesize / 2) - i)) begin
			o_logic o1(.gp1(Q_temp[16 * i + (j - 2 ** ($clog2(Treesize / 4) - i)) * 2 + 1:16 * i + (j - 2 ** ($clog2(Treesize / 4) - i)) * 2]),
						   .gp2(Q_temp[16 * i + j * 2 + 1:16 * i + j * 2]),
						   .gp(Q_temp[16 * (i + 1) + j * 2 + 1: 16 * (i + 1) + j * 2]));
			if(j != Treesize - 1 - 2 ** ($clog2(Treesize / 4) - i)) begin
				assign Q_temp[16 * (i + 1) + (j + 2 ** ($clog2(Treesize / 2) - i)) * 2 - 1:16 * (i + 1) + j * 2 + 2] = Q_temp[16 * i + (j + 2 ** ($clog2(Treesize / 2) - i)) * 2 - 1:16 * i + j * 2 + 2];
			end
		end
		assign Q_temp[16 * (i + 2) - 1:16 * (i + 2) - (2 ** ($clog2(Treesize / 4) - i)) * 2] = Q_temp[16 * (i + 1) - 1:16 * (i + 1) - (2 ** ($clog2(Treesize / 4) - i)) * 2];
	end
	assign Q_gp[1:0] = Q_temp[16+ 1:16 * 1];
	for(i = 1;i < Treesize;i = i + 2) begin
		assign Q_gp[i * 2 + 1:i * 2] = Q_temp[16 + i * 2 + 1:16 + i * 2];
	end
    // 1    3 2   19 18
    // 3    7 6    23 22
    // 5    11 10  27 26
    // 7    15 14  31 30
	for(i = 2; i < Treesize; i = i + 2) begin
		o_logic o1(.gp1(Q_temp[16+ i * 2 - 1:16+ i * 2 - 2]),
					   .gp2(Q_temp[16+ i * 2 + 1:16+ i * 2]),
					   .gp(Q_gp[i * 2 + 1:i * 2]));
	end
    // 2   19 18   21 20   5  4
    // 4   23 22   25 24   9  8
    // 6   27 26   29 28   13 12
	endgenerate    

	
endmodule