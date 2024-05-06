module pg_generate (a,b,p,g);

	input 	    		a;
	input 	    		b;
	output 	    		p;
	output	  			g;

    assign p = a ^ b;
    assign g = a & b;

endmodule