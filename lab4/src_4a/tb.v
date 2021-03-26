`timescale 1ns / 1ns
`include "define.v"

module tb ();

reg Clk=0, Start=0;
reg Result_rden=0;
reg [`OUTADDRWIDTH-1:0] Result_addr;
wire [`OUTPUTWIDTH-1:0] Result;

matmult_top mmtop(.Clk(Clk), .Start(Start), .Result_addr(Result_addr), .Result(Result) );

initial
begin
    Clk=0;
    Start=0;
    Result_rden=0;
    Result_addr=0;
    
    #1000 Start=1;
    #10 Start=0;
    
    #5000 Result_rden=1;
    #2560 Result_rden=0;
end

always #5 Clk=~Clk;

always@(posedge Clk)
begin
    if(Result_rden) Result_addr<=Result_addr+1;
end

endmodule