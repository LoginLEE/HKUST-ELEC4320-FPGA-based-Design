// Lab 1B: ELEC 4320- FPGA-based design: From Theory to Practice
// Department of ECE, Hong Kong University of Science & Technology
// 3 to 8 decoder
module decoder (input_value, show_value);

input [2:0] input_value;
output reg [7:0] show_value;


always@(input_value)
begin
	case(input_value)
		//you need to implement the decoder function here. 
		
	endcase

end

endmodule
