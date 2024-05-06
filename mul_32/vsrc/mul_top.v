module mul_top(ai,bi,sign,result);
	input 	[31:0]	    ai;
	input	[31:0]	    bi;
    input               sign;
    output  [63:0]      result;

    wire 	[63:0]	    part_result [16:0];
    wire                sign_a;	  
    wire                sign_b;	

    assign sign_a = sign & ai[31];
    assign sign_b = sign & bi[31]; 

    wallace_tree tree0(
        .part_result(part_result),
        .result(result)
    );        
	
    genvar i;
    generate
        for(i = 0; i <= 32; i = i + 2) begin
            if(i == 0) begin
                partial_gen gen0(
                    .x({sign_a,ai}),
                    .src({bi[1:0],1'b0}),
                    .part_result(part_result[0])
                );
            end
            else if(i == 32) begin
                partial_gen gen1(
                    .x({sign_a,ai}),
                    .src({1'b0,sign_b,bi[i-1]}),
                    .part_result(part_result[16])
                );
            end
            else begin
                partial_gen gen2(
                    .x({sign_a,ai}),
                    .src(bi[i+1:i-1]),
                    .part_result(part_result[i/2])
                );
            end
        end
    endgenerate

endmodule