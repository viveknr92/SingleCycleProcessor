`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:57:37 03/03/2018 
// Design Name: 
// Module Name:    Control 
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
module Control(opcode,clk,regWrite,regDest,ALUsrc,ALUControl, MemWriteEnable, MemReadEnable, MemToReg, branch);
parameter OPCODE_WIDTH = 3;
parameter ALU_OP = 3;
    input [OPCODE_WIDTH - 1:0] opcode;
	 input clk;
    output reg regWrite;
    output reg regDest;
	 output reg ALUsrc;
	 output reg MemWriteEnable;
	 output reg MemReadEnable;
	 output reg MemToReg;
	 output reg branch;
    output reg [ALU_OP - 1:0] ALUControl;

	parameter ADDI = 3'd1;
	parameter ADD = 3'd0;
	parameter LOAD = 3'd2;
	parameter STORE = 3'd3;
	parameter BNQ = 3'd4;
	parameter SUBI = 3'd5;
	parameter SUB = 3'd6;
	always@(*)
	begin
		case(opcode)
			ADDI : 
			begin
				ALUControl = 3'b000;
				regDest = 0;
				regWrite = 1;
				ALUsrc = 1;
				MemWriteEnable = 0;
				MemReadEnable = 0;
				MemToReg = 0;
				branch = 0;
			end
			SUBI : 
			begin
				ALUControl = 3'b001;
				regDest = 0;
				regWrite = 1;
				ALUsrc = 1;
				MemWriteEnable = 0;
				MemReadEnable = 0;
				MemToReg = 0;
				branch = 0;
			end
			ADD : 
			begin
				ALUControl = 3'b000;
				ALUsrc = 0;
				regDest= 1;
				regWrite = 1;
				MemWriteEnable = 0;
				MemReadEnable = 0;
				MemToReg = 0;
				branch = 0;
			end
			SUB : 
			begin
				ALUControl = 3'b001;
				ALUsrc = 0;
				regDest= 1;
				regWrite = 1;
				MemWriteEnable = 0;
				MemReadEnable = 0;
				MemToReg = 0;
				branch = 0;
			end
			LOAD : 
			begin
				ALUControl = 3'b000;
				ALUsrc = 1;
				regDest= 0;
				regWrite = 1;
				MemWriteEnable = 0;
				MemReadEnable = 1;
				MemToReg = 1;
				branch = 0;
			end
			STORE : 
			begin
				ALUControl = 3'b000;
				ALUsrc = 1;
				regDest= 0;
				regWrite= 0;
				MemWriteEnable = 1;
				MemReadEnable = 0;
				MemToReg = 0;
				branch = 0;
			end
			BNQ: 
			begin
				ALUControl = 3'b001;
				ALUsrc = 0;
				regDest= 0;
				regWrite= 0;
				MemWriteEnable = 0;
				MemReadEnable = 0;
				MemToReg = 0;
				branch = 1;
			end
			default : 
			begin
				ALUControl = 3'b000;
				regDest = 0;
				regWrite = 0;
				ALUsrc = 0;
				MemWriteEnable = 0;
				MemReadEnable = 0;
				MemToReg = 0;
				branch = 0;
			end			
		endcase
	end
endmodule
