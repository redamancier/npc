
module mux41 #(
parameter DW = 2
)(
    input    [DW-1:0]    data_in,
    input    [1:0] sel,
    output    [DW-1:0]    data_out
);
    wire    sel_in0;
    wire    sel_in1;
    wire    sel_in2;
    wire    sel_in3;
    assign    sel_in0 = (sel==2'b00);
    assign    sel_in1 = (sel==2'b01);
    assign    sel_in2 = (sel==2'b10);
    assign    sel_in3 = (sel==2'b11);
    assign    data_out = ({DW{sel_in0}}&data_in0) | ({DW{sel_in1}}&data_in1) | ({DW{sel_in2}}&data_in2) | ({DW{sel_in3}}&data_in3);
endmodule
