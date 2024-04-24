module mul_top(src,part_result,c);
	input 	[63:0]	    ai;
	input	[63:0]	    bi;
    output  [127:0]     result;

    wire 	[127:0]	    part_result [31:0];	  

    wallace_tree tree0(
        .part_result(part_result),
        .result(result)
    );        
	
    genvar i;
    generate
        for(i = 0; i < 64; i = i + 2) begin
            if(i == 0) begin
                partial_gen gen0(
                    .x(ai),
                    .src({bi[1],bi[0],1'b0}),
                    .part_result(part_result[0])
                );
            end
            else begin
                partial_gen gen0(
                    .x(ai),
                    .src(bi[i+1:i-1]),
                    .part_result(part_result[32])
                );
            end
        end
    endgenerate

endmodule