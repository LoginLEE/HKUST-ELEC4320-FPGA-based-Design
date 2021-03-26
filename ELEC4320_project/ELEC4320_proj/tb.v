`timescale 1ns / 1ns
`include "define.v"

module tb ();
reg nrst;
reg clk=0;
wire [6:0]x;
wire [6:0]y;
wire [7:0] imag;
wire [`img_addr_size:0]addr;
wire h_clk;
wire v_clk;
image_main ia(.nrst(nrst), .clk(clk), .out(imag), .h_clk(h_clk), .v_clk(v_clk), .x(x), .y(y), .addr(addr));

always #5 clk=~clk; 
initial begin
	nrst = 1;
	#100 nrst=0;
end
endmodule 