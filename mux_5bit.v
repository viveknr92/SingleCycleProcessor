`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:35:56 03/04/2018 
// Design Name: 
// Module Name:    mux_5bit 
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
module mux_5bit(input1,input2,sel,output1);
parameter REG_WIDTH  = 3;
    input [REG_WIDTH - 1:0] input1;
	 input [REG_WIDTH - 1:0] input2;
	 input sel;
    output reg [REG_WIDTH - 1:0] output1;
always @(*)
    begin 
      case(sel)      
          1'b0:  output1 =input1;
          1'b1:  output1 =input2;
			default: output1 = 0;			 
      endcase
    end

endmodule
