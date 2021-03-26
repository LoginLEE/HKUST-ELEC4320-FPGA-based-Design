`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:56:49 12/17/2019 
// Design Name: 
// Module Name:    image_main 
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
module image_main(
nrst, //input
clk, 	//input-pll clk
out, 	//output pixel
h_clk,//output horizontal clk
v_clk,//output verticalclk
//debug use below
x,
y,
addr
    );
input nrst;
input clk;

reg en = 1;
//State
reg [4:0]case_curr = 0;
wire [`px_size:0]getMem;
reg [31:0]answer;
reg [8:0]absGx;
reg [8:0]absGy;
reg [8:0]med;

//Actual output
output reg[7:0]out;
output reg h_clk;
output reg v_clk;
//debug use Calibration
output reg [`img_addr_size:0]addr=0;
output reg [6:0]x = 1;	//128>100, 2 to 100
output reg [6:0]y = 1;	//128>100, 2 to 100
initial begin 
	addr<=1'b0;
	h_clk<=1'b0;
	v_clk<=1'b0;
end

image_ram im_ram(
            .s(clk),
            .ena(~nrst),
            .wea(1'b0),
            .addra(addr),
            .dina(8'd0),
            .douta(getMem)
        );
		  
median_filter median(	//all input just for testing
            .s1(0),
            .s2(0),
            .s3(0),
            .s4(0),
            .s5(2),
            .s6(2),
            .s7(2),
            .s8(2),
            .s9(1),
            .m(med)
        );

always@(posedge clk)	begin 
	if(nrst) begin
		addr<=0;
		x<=1;
		y<=1;
		out<=0;
	end
end

/*

always@(posedge clk && (~nrst))begin
	case(case_curr)
	
		//GX
		
		//row1
		4'b0000: begin
			addr = 100*(y-1)+(x-1);
			answer=-getMem;
			case_curr = case_curr+1;
			h_clk=1'b0;
		end
		4'b0001: begin
			addr = 100*(y-1)+(x+1);
			answer=answer + getMem;
			case_curr = case_curr+1;
		end
		
		//row2
		4'b0010: begin
			addr = 100*(y)+(x-1);
			answer=answer-getMem-getMem;
			case_curr = case_curr+1;
			end
		4'b0011: begin
			addr = 100*(y)+(x+1);
			answer=answer+getMem+getMem;
			case_curr = case_curr+1;
		end
		
		//row3
		4'b0100: begin
			addr = 100*(y+1)+(x-1);
			answer=answer-getMem;
			case_curr = case_curr+1;
		end
		4'b0101: begin
			addr = 100*(y+)+(x+1);
			answer=answer+getMem;
			case_curr = case_curr+1;
		end
		
		//save GX abs value
		
		4'b0110: begin
		  if (answer[31] == 1'b1) begin
			 absGx = -answer/8;
		  end
		  else begin
			 absGx = answer/8;
		  end
			answer=0;
			case_curr = case_curr+1;
		end
		
		//Gy
		
		//row1
		4'b0111: begin
			addr = 100*(y-1)+(x-1);
			answer=answer+getMem;
			case_curr = case_curr+1;
		end
		4'b1000: begin
			addr = 100*(y-1)+(x);
			answer=answer+getMem+getMem;
			case_curr = case_curr+1;
		end
	   4'b1001: begin
			addr = 100*(y-1)+(x+1);
			answer=answer+getMem;
			case_curr = case_curr+1;
		end
		
		//row3

		4'b1010: begin
			addr = 100*(y+1)+(x-1);
			answer=answer-getMem;
			case_curr = case_curr+1;
		end
		4'b1011: begin
			addr = 100*(y+1)+(x);
			answer=answer-getMem-getMem;
			case_curr = case_curr+1;
		end
		4'b1100: begin
			addr = 100*(y+1)+(x+1);
			answer=answer-getMem;
			case_curr = case_curr+1;
		end
		
		//save abs GY
		
		4'b1101: begin
		  if (answer[31] == 1'b1) begin
			 absGy = -answer/8;
		  end
		  else begin
			 absGy = answer/8;
		  end
			answer=0;
			case_curr = case_curr+1;
		end
		
		//Processing
		4'b1110: begin
			answer = absGx + absGx;
			out = answer[7:0];
			case_curr = 0;	//reset
			x=x+1;
			h_clk=1'b1;
			v_clk=1'b0;
			if(x>=100) begin 
				v_clk = 1'b1;
				y=y+1;
				x=1;
			end
		end
	endcase
end
*/

always@(posedge clk && (~nrst))begin
	case(case_curr)
		//ROW1
		4'b0000: begin
			addr = 100*(y-1)+(x-1);
			answer=0;
			case_curr = case_curr+1;
			h_clk=1'b0;
		end
		4'b0001: begin
			addr = 100*(y-1)+(x);
			answer=getMem*`k_0;
			case_curr = case_curr+1;
		end
		4'b0010: begin
			addr = 100*(y-1)+(x+1);
			answer=answer+getMem*`k_1;
			case_curr = case_curr+1;
			end
		//ROW2
		4'b0011: begin
			addr = 100*(y)+(x-1);
			answer=answer+getMem*`k_2;
			case_curr = case_curr+1;
		end
		4'b0100: begin
			addr = 100*(y)+(x);
			answer=answer+getMem*`k_3;
			case_curr = case_curr+1;
		end
		4'b0101: begin
			addr = 100*(y)+(x+1);
			answer=answer+getMem*`k_4;
			case_curr = case_curr+1;
		end
		//ROW3
		5'b0110: begin
			addr = 100*(y+1)+(x-1);
			answer=answer+getMem*`k_5;
			case_curr = case_curr+1;
		end
		5'b0111: begin
			addr = 100*(y+1)+(x);
			answer=answer+getMem*`k_6;
			case_curr = case_curr+1;
		end	
		5'b1000: begin
			addr = 100*(y+1)+(x+1);
			answer=answer+getMem*`k_7;
			case_curr = case_curr+1;
		end
		5'b1001: begin
			answer=answer+getMem*`k_8;
			case_curr = case_curr+1;
		end
		//Processing
		5'b1010: begin
			answer = answer/9;
			out = answer[7:0];
			case_curr = 0;	//reset
			x=x+1;
			h_clk=1'b1;
			v_clk=1'b0;
			if(x>=100) begin 
				v_clk = 1'b1;
				y=y+1;
				x=1;
			end
		end
	endcase
end


endmodule
