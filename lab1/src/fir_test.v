`timescale 1ns / 1ps

module fir_test(

    );
    reg [7:0] in=0;
    reg reset_n;
    reg clk;
    wire [7:0] out;
    fir fir_unit(.datain( in),
             .reset_n(reset_n),
             .clk(clk),
             .dataout(out));
             
    always #2 clk=~clk;
    initial
    begin
        clk=1'b0;
        reset_n=1'b1;
        #10 reset_n=1'b0;
        #4 reset_n=1'b1;
        #4 in=8'b00000001;
        #4 in=8'b00000010;
        #4 in=8'b00000011;
        #4 in=8'b00000100;
        #4 in=8'b00000101;
        #4 in=8'b00000110;
        #4 in=8'b00000111;
        #4 in=8'b00001000;
    end
   
endmodule
