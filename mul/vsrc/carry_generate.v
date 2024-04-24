module cla_part#(width=4)(p,g,c);

	input 	[width-1:0]		p;
	input 	[width-1:0]		g;
    output 	[width:0]		c;
	
    if(width == 4) begin
        c[1] = g[0] | (c[0] & p[0]);
        c[2] = g[1] | (g[0] & p[1]) | (c[0] & p[1] & p[0]);
        c[3] = g[2] | (g[1] & p[2]) | (g[0] & p[1] & p[2]) | (c[0] & p[1] & p[0] & p[2]);
        c[4] = g[3] | (g[2] & p[3]) | (g[1] & p[2] & p[3]) | (g[0] & p[1] & p[3] & p[2]) | (c[0] & p[1] & p[0] & p[2] & p[3]);
    end
    else begin
        c = 0;
    end
    // else if(width == 8) begin
    //     c[1] = g[0] | (c[0] & p[0]);
    //     c[2] = g[1] | (g[0] & p[1]) | (c[0] & p[1] & p[0]);
    //     c[3] = g[2] | (g[1] & p[2]) | (g[0] & p[1] & p[2]) | (c[0] & p[1] & p[0] & p[2]);
    //     c[4] = g[3] | (g[2] & p[3]) | (g[1] & p[2] & p[3]) | (g[0] & p[1] & p[3] & p[2]) | (c[0] & p[1] & p[0] & p[2] & p[3]);
    // end
endmodule