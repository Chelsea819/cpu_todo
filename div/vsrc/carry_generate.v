/* verilator lint_off UNOPTFLAT */
module carry_generate#(width=4)(p,g,c0,c);

	input 	    [width-1:0]		p;
	input 	    [width-1:0]		g;
    input                       c0;
    output reg 	[width-1:0]		c;
	
    
    always @( *) begin
        if(width == 4) begin
            c[0] = g[0] | (c0 & p[0]);
            c[1] = g[1] | (g[0] & p[1]) | (c0 & p[1] & p[0]);
            c[2] = g[2] | (g[1] & p[2]) | (g[0] & p[1] & p[2]) | (c0 & p[1] & p[0] & p[2]);
            c[3] = g[3] | (g[2] & p[3]) | (g[1] & p[2] & p[3]) | (g[0] & p[1] & p[3] & p[2]) | (c0 & p[1] & p[0] & p[2] & p[3]);
        end
        else begin
            c = 0;
        end
    end
    // else if(width == 8) begin
    //     c[0] = g[0] | (c0 & p[0]);
    //     c[1] = g[1] | (g[0] & p[1]) | (c0 & p[1] & p[0]);
    //     c[2] = g[2] | (g[1] & p[2]) | (g[0] & p[1] & p[2]) | (c0 & p[1] & p[0] & p[2]);
    //     c[3] = g[3] | (g[2] & p[3]) | (g[1] & p[2] & p[3]) | (g[0] & p[1] & p[3] & p[2]) | (c0 & p[1] & p[0] & p[2] & p[3]);
    // end
endmodule
/* verilator lint_on UNOPTFLAT */