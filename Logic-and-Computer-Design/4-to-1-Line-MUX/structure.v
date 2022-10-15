// 4-to1-Line Multiplexer: Structural Verilog Description

module multiplexer_4_to_1_st_v (S, I, Y);
    input [1:0] S;
    input [3:0] I;
    output Y;

    wire [1:0] not_S;
    wire [0:3] D, N;

    not
        gn0(not_S[0], S[0]);
        gn1(not_S[1], S[1]);

    and
        g0(D[0], not_S[1], not_S[0]);
        g1(D[1], not_S[1], S[0]);
        g2(D[2], S[1], not_S[0]);
        g3(D[3], S[1], S[0]);
        g0(N[0], D[0], I[0]);
        g1(N[1], D[1], I[1]);
        g2(N[2], D[2], I[2]);
        g3(N[3], D[3], I[3]);
    
    or
        go(Y, N[0], N[1], N[2], N[3]);
endmodule
