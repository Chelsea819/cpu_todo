module full_adder (ai,bi,cin,result,co);
	input 	    	        ai;
	input 	    	        bi;
	input 	        	    cin;
	output	        		result;
	output	        		co;
	
	assign result = ai ^ bi ^ cin;
    assign co = (ai & bi) | (cin & (ai ^ bi));
	
endmodule