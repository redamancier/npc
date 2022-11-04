
module mux41(
    input    [3:0] a,
    input    [1:0] s,
    output   y
);
    assign    y = ((~s[0])|(~s[1])|a[0]) & ((~s[0])|s[1]|a[1]) & (s[0]|(~s[1])|a[2]) & (s[0]|s[1]|a[3]);
endmodule
