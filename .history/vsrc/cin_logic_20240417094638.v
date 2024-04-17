module cin_logic();
    input   [1:0]   Q_gp;
    input           c0;
    output          cin;

    assign cin = (Q_gp[0] & c0) | Q_gp[1];

endmodule