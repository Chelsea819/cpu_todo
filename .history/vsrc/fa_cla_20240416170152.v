// generate p g
module fa_cla(a_i,b_i,cin,result,gp);
    input       a_i;
    input       b_i;
    input       cin;
    output      result;
    output  [1:0] gp;

    assign gp[0] = a_i ^ b_i;
    assign gp[1] = a_i & b_i;
    assign result = pg[0] ^ cin;

endmodule