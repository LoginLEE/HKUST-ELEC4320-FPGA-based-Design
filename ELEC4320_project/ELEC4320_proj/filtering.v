`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:24:41 12/17/2019 
// Design Name: 
// Module Name:    filtering 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module filtering(clk, cnt

    );
input clk;
reg [3:0]cnt_reg=0;
output [3:0]cnt;

always@(posedge clk)
begin
	cnt_reg=cnt_reg+1;
end
assign cnt = cnt_reg;
endmodule
