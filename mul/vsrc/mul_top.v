module mul_top(ai,bi,sign,result);
	input 	[63:0]	    ai;
	input	[63:0]	    bi;
    input               sign;
    output  [127:0]     result;

    wire 	[127:0]	    part_result [32:0];
    wire                sign_a;	  
    wire                sign_b;	

    assign sign_a = sign & ai[63];
    assign sign_b = sign & bi[63];   

    wallace_tree tree0(
        .part_result(part_result),
        .result(result)
    );        
	
    genvar i;
    generate
        for(i = 0; i <= 64; i = i + 2) begin
            if(i == 0) begin
                partial_gen gen0(
                    .x({ai,sign_a}),
                    .src({bi[0],sign_b,1'b0}),
                    .part_result(part_result[0])
                );
            end
            else if(i == 64) begin
                partial_gen gen1(
                    .x({ai,sign_a}),
                    .src(1'b0,bi[i-1:i-2]),
                    .part_result(part_result[32])
                );
            end
            else begin
                partial_gen gen2(
                    .x({ai,sign_a}),
                    .src(bi[i:i-2]),
                    .part_result(part_result[i/2])
                );
            end
        end
    endgenerate

endmodule