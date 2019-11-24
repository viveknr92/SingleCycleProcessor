`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:05:29 03/03/2018 
// Design Name: 
// Module Name:    ProgramCounter 
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
module ProgramCounter( clk, reset, PC);
parameter INST_WIDTH = 32;
    input clk;
	 input reset;
	 output reg[INST_WIDTH - 1:0] PC;
always@ (posedge clk or posedge reset)
begin
	if(reset)
		PC = 0;
	else
		PC = PC + 32'd4;
end
endmodule
