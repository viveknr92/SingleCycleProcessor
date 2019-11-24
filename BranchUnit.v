`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:37:47 11/07/2019 
// Design Name: 
// Module Name:    BranchUnit 
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
module BranchUnit(
	input clk,
	input reset,
    input [INST_WIDTH - 1:0] Immediate,
    input branch,
    input zero,
    output reg [INST_WIDTH - 1:0] PC
    );
	parameter INST_WIDTH = 16;

assign branchSelect = branch & (~zero); 

always@ (posedge clk)
begin
	if(reset)
		PC = 0;
	else if (branchSelect == 1'b1)
		PC = PC - Immediate;
	else
		PC = PC + 16'd2;
end

endmodule
