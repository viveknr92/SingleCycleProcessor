`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    04:46:10 11/06/2019 
// Design Name: 
// Module Name:    WriteBackMux 
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
module WriteBackMux(
    input MemToReg,
    input [DATA_WIDTH - 1:0] ALU_OUT,
    input [DATA_WIDTH - 1:0] MemDataOut,
    output reg [DATA_WIDTH - 1:0] WriteBack
    );
parameter DATA_WIDTH = 16;
always @(*)
    begin 
      case(MemToReg)      
          1'b0:  WriteBack <= ALU_OUT;
          1'b1:  WriteBack <= MemDataOut;
			default: WriteBack <= 0;
      endcase
    end

endmodule
