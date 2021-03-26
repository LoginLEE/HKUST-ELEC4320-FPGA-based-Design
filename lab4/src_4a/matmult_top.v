`include "define.v"
module matmult_top (Clk, Start, Result_addr, Result);

input Clk, Start;
input [`OUTADDRWIDTH-1:0] Result_addr;
output [`OUTPUTWIDTH-1:0] Result;

wire [`INPUTWIDTH-1:0] A_value [`MATRIXSIZE-1:0];
wire [`INPUTWIDTH-1:0] B_value [`MATRIXSIZE-1:0];
reg [`OUTADDRWIDTH-1:0] C_addr=0;

wire Rd_en;
wire [`INADDRWIDTH-1:0] Rd_A_addr;
wire [`INADDRWIDTH-1:0] Rd_B_addr;
wire Wr_en;
wire [`OUTADDRWIDTH-1:0] Wr_addr;
wire [`OUTPUTWIDTH-1:0] C;

//######################################################
generate 
genvar i;
    for(i=0;i<`MATRIXSIZE; i=i+1)
    begin: A_ram
        Input_RAM_A A_column (
            .clka(Clk),
            .ena(Rd_en),
            .wea(1'b0),
            .addra(Rd_A_addr),
            .dina(`INPUTWIDTH'd0),
            .douta(A_value[i])
        );    
    end
    for(i=0;i<`MATRIXSIZE; i=i+1)
    begin: B_ram
        Input_RAM_B B_row (
            .clka(Clk),
            .ena(Rd_en),
            .wea(1'b0),
            .addra(Rd_B_addr),
            .dina(`INPUTWIDTH'd0),
            .douta(B_value[i])
        );    
    end    
endgenerate

Output_RAM C_ram (
  .clka(Clk),
  .wea(Wr_en),
  .addra(C_addr),
  .dina(C),
  .douta(Result)
);

always @(Wr_en or Wr_addr or Result_addr)
begin
    if(Wr_en) C_addr=Wr_addr;
    else C_addr=Result_addr;
end  

matmult_kernel mmkernel(.Clk(Clk), .Start(Start), 
        .A_0(A_value[0]), .A_1(A_value[1]), .A_2(A_value[2]), .A_3(A_value[3]), .A_4(A_value[4]), .A_5(A_value[5]), .A_6(A_value[6]), .A_7(A_value[7]),
        .A_8(A_value[8]), .A_9(A_value[9]), .A_10(A_value[10]), .A_11(A_value[11]), .A_12(A_value[12]), .A_13(A_value[13]), .A_14(A_value[14]), .A_15(A_value[15]),
        .B_0(B_value[0]), .B_1(B_value[1]), .B_2(B_value[2]), .B_3(B_value[3]), .B_4(B_value[4]), .B_5(B_value[5]), .B_6(B_value[6]), .B_7(B_value[7]),
        .B_8(B_value[8]), .B_9(B_value[9]), .B_10(B_value[10]), .B_11(B_value[11]), .B_12(B_value[12]), .B_13(B_value[13]), .B_14(B_value[14]), .B_15(B_value[15]),
        .C(C), .Rd_en(Rd_en), .Rd_A_addr(Rd_A_addr), .Rd_B_addr(Rd_B_addr), .Wr_en(Wr_en), .Wr_addr(Wr_addr)
);

endmodule