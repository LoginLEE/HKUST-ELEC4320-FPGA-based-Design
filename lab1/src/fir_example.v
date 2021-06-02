module fir(
    input [7:0] datain,
    input reset_n,
    input clk,
    output reg [7:0] dataout
    );
    reg [7:0] r1=8'b0;
	reg [7:0] r2=8'b0; 
	reg [7:0] r3=8'b0;
	reg [7:0] r4=8'b0;
    reg [7:0] h1=1;
    reg [7:0] h2=3;
    reg [7:0] h3=2;
    reg [7:0] h4=-1;
    always@(posedge clk)
    begin
        if(~reset_n) begin
            r1<=8'b0;
            r2<=8'b0;
            r3<=8'b0;
            r4<=8'b0;
        end
        else begin
            //finish the input read and data transmission here.
            
        end
    end
    
    always @ (posedge clk)
    begin
        if(~reset_n) begin
            dataout<=8'b0;
        end
        else begin
            //finish the multiplication and addition here.
            
        end
    end
endmodule
