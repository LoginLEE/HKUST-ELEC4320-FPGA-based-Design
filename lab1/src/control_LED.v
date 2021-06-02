// Lab 1A: ELEC 4440- Reconfigurable Computing: From Theory to Practice
// Department of ECE, Hong Kong University of Science & Technology
// Controlling the LEDs using DIP switches on 

module control_LED
( 
  input [7:0] input_value,
  output [7:0] show_value
);

assign show_value = input_value;
//Insert your code to assign to output port

endmodule