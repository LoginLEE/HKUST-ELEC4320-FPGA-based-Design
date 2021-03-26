`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:39:06 02/10/2014 
// Design Name: 
// Module Name:    main_logic 
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
`include "define.v"
module main_logic(clk, rst, up, down, left, right, pixel_x, pixel_y, pixel_r, pixel_g, pixel_b);
    input clk;
    input rst;
    input up;
    input down;
	 input left;
	 input right;
    input [9:0] pixel_x;
    input [9:0] pixel_y;
    output reg [7:0] pixel_r;
    output reg [7:0] pixel_g;
    output reg [7:0] pixel_b;
	
//calculation - image processing
reg [31:0] result;
//RAM
reg [13:0]addr=0;
wire [23:0]getRga;
wire [7:0]getGray;
wire [7:0]getMed;
im_rgb_ram im_rgb_ram(
            .clka(clk),
            .ena(1),
            .wea(1'b0),
            .addra(addr),
            .dina(8'd0),
            .douta(getRga)
        );
im_gray_ram im_g_ram(
            .clka(clk),
            .ena(1),
            .wea(1'b0),
            .addra(addr),
            .dina(8'd0),
            .douta(getGray)
        );
im_m_ram im_med_ram(
            .clka(clk),
            .ena(1),
            .wea(1'b0),
            .addra(addr),
            .dina(8'd0),
            .douta(getMed)
        );		

//Main
reg [7:0] gray;
always@(posedge clk) begin
	pixel_r = 8'h00;
	pixel_g = 8'h00;
	pixel_b = 8'h00;
	addr = 100*pixel_y+pixel_x;
	if(~rst) begin
	  if(pixel_x < 100
	  && pixel_y < 100
	  ) begin
	  if(up) begin
			gray = (19589*(8'hff&(getRga>>16))+38469*(8'hff&(getRga>>8))+7471*(8'hff&(getRga)))>>16;
			pixel_r = gray;
			pixel_g = gray;
			pixel_b = gray;
		end else if(down) begin
			pixel_r = (getRga>>16);
			pixel_g = (getRga>>8);
			pixel_b = (getRga);
		end else if(right) begin
			pixel_r = (getMed);
			pixel_g = (getMed);
			pixel_b = (getMed);
		end else begin
			pixel_r = (getGray);
			pixel_g = (getGray);
			pixel_b = (getGray);
		end				
	  end
	 end
	end


endmodule
