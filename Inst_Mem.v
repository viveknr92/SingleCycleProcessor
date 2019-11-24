`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:54:01 03/03/2018 
// Design Name: 
// Module Name:    Inst_Mem 
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
module Inst_Mem(addr,data);
parameter INST_WIDTH = 16;
input [INST_WIDTH - 1:0] addr;
output reg [INST_WIDTH - 1:0] data;
	 
	parameter ADDI = 3'd1;
	parameter ADD = 3'd0;
	parameter LOAD = 3'd2;
	parameter STORE = 3'd3;
	parameter BNQ = 3'd4;
	parameter SUBI = 3'd5;
	parameter SUB = 3'd6;
	
	parameter R0 = 3'h0;
	parameter R1 = 3'h1;
	parameter R2 = 3'h2;
	parameter R3 = 3'h3;
	parameter R4 = 3'h4;
	
	parameter N = 6'd8;
	// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765
	always@ (addr)
	begin
		case(addr>>1)//  opcode,src1, s2/d, dest , imm
			'd0 : data <= { ADDI, R0, 	R3, 	1'b0, N }; 	   // r3 = 5 (N = 5)
			'd1 : data <= { ADDI, R3, 	R3, 	1'b0, 6'h1 }; 	// r3 = r3 + 1
			'd2 : data <= { ADDI, R0, 	R1, 	1'b0, 6'h1 };  // r1 = 1
			'd3 : data <= { SUBI, R0, 	R2, 	1'b0, 6'h1 };  // r2 = -1
			'd4 : data <= { ADD,  R1, 	R2, 	R1, 	4'h0 };  // r1 = r1 + r2 (LOOP)
			'd5 : data <= { SUB,  R1, 	R2, 	R2, 	4'h0 };  // r2 = r1 - r2
			'd6 : data <= { SUBI, R3, 	R3, 	1'b0, 6'h1 };  // r3 = r3 - 1
			'd7 : data <= { BNQ,  R3, 	R0, 	1'b0, 6'd3 << 1}; // Goto LOOP if r3 != r0
			'd8 : data <= { STORE,R0, 	R1, 	1'b0, 6'h1 };  // [r0 + 1] = r1, (place r1 in s2/d)
			'd9 : data <= { LOAD, R0, 	R4, 	1'b0, 6'h1 };  // r4 = [r0 + 1]
			default: data <= 0;
		endcase
	end
endmodule
