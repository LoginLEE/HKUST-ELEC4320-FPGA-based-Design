`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    07:39:17 12/20/2019 
// Design Name: 
// Module Name:    median 
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
module median(
s1,
s2,
s3,
s4,
s5,
s6,
s7,
s8,
s9,
m
    );

input [7:0]s1;
input [7:0]s2;
input [7:0]s3;
input [7:0]s4;
input [7:0]s5;
input [7:0]s6;
input [7:0]s7;
input [7:0]s8;
input [7:0]s9;
output [7:0]m;

wire [7:0]x [0:38];

sort2 n1(s1,s2,x[2],x[1]);
sort2 n2(s4,s5,x[4],x[3]);
sort2 n3(s7,s8,x[6],x[5]);

sort2 n4(x[2],s3,x[8],x[7]);
sort2 n5(x[4],s6,x[10],x[9]);
sort2 n6(x[6],s7,x[12],x[11]);

sort2 n7(x[1],x[7],x[14],x[13]);
sort2 n8(x[3],x[9],x[16],x[15]);
sort2 n9(x[5],x[11],x[18],x[17]);

sort2 n10(x[13],x[15],x[20],x[19]);
sort2 n11(x[14],x[16],x[22],x[21]);
sort2 n12(x[10],x[12],x[24],x[23]);

sort2 n13(x[20],x[17],x[26],x[25]);
sort2 n14(x[22],x[18],x[28],x[27]);
sort2 n15(x[8],x[23],x[30],x[29]);

sort2 n16(x[21],x[27],x[32],x[31]);

sort2 n17(x[26],x[32],x[34],x[33]);

sort2 n18(x[34],x[29],x[36],x[35]);

sort2 n19(x[33],x[35],x[38],x[37]);

assign m = x[38];

endmodule

module sort2(a,b,min,max);
input [7:0]a;
input [7:0]b;
output [7:0]min;
output [7:0]max;
wire cmp;
compare c1(a,b,cmp);
mux m1(a,b,cmp,min);
mux m2(b,a,cmp,max);
endmodule

module mux(a,b,s,out1);
input [7:0]a;
input [7:0]b;
input s;
output [7:0]out1;
reg [7:0]out1;
always@(a,b,s)
begin
if(s==1'b1)
out1=a;
else
out1=b;
end
endmodule

module compare(a,b,out1);
input [7:0]a;
input [7:0]b;
output out1;
reg out1;
always@(a,b)
begin
if(a<b)
out1=1'b1;
else
out1=1'b0;
end
endmodule


