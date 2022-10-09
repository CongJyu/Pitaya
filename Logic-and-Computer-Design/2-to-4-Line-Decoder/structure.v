// 2-to-4-Line Decoder with Enable: Structural Verilog Desc.

module decoder_2_to_4_st_v (
    EN, A0, A1, D0, D1, D2, D3
);
    // input and output var
    input EN, A0, A1;
    output D0, D1, D2, D3;

    wire A0_n, A1_n, N0, N1, N2, N3;
    not
        g0(A0_n, A0),
        g1(A1_n, A1);
    and
        g3(N0, A0_n, A1_n),
        g4(N1, A0, A1_n),
        g5(N2, A0_n, A1),
        g6(N3, A0, A1),
        g7(D0, N0, EN),
        g8(D1, N1, EN),
        g9(D2, N2, EN),
        g10(D3, N3, EN);
endmodule
