module partial_gen(x,src,part_result);
    input	[32:0]	    x;
	input 	[2:0]	    src;
	output	[63:0]	    part_result;

    wire 		    neg;
	wire 		    zero;
	wire 		    one;
	wire 		    two;              
	
    booth_sel booth0 (
        .src(src),
        .neg(neg),
        .zero(zero),
        .one(one),
        .two(two)
    );
	
    result_sel partial_result0 (
        .x(x),
        .neg(neg),
        .zero(zero),
        .one(one),
        .two(two),
        .p(part_result)
    );

endmodule