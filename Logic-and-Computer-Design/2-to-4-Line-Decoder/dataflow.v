// 2-to-4-Line Decoder with Enable: Dataflow Verilog Desc

module decoder_2_to_4_df_v (
    EN, A0, A1, D0, D1, D2, D3
);
    input EN, A0, A1;
    output D0, D1, D2, D3;

    assign D0 = EN & ~A1 & ~A0;
    assign D1 = EN & ~A1 & A0;
    assign D2 = EN & A1 & ~A0;
    assign D3 = EN & A1 & A0;
    
endmodule
