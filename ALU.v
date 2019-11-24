`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:07:40 02/15/2018 
// Design Name: 
// Module Name:    ALU 
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
module ALU(A,B,Cin,op,OUT,Z,V,N,C);
	parameter DATA_WIDTH = 16;
	parameter ALU_OP = 3;
	 input [DATA_WIDTH - 1:0] A;
    input [DATA_WIDTH - 1:0] B;
    input Cin;
    input [ALU_OP - 1:0] op;
    output reg [DATA_WIDTH - 1:0] OUT;
    output reg Z;
    output reg N;
    output reg V;
    output reg C;
	parameter ADD_OP = 3'b0;
	parameter SUB_OP = 3'b1;
	always @ (*)
	begin //always
			Z <= 0;
			N <= 0;
			C <= 0;
			V <= 0;
			
			case (op)
				ADD_OP: 	{C,OUT} <= A + B + Cin;
				SUB_OP:	{C,OUT} <= A - B - Cin;
				default: {C,OUT} <= 0;
			endcase
			
			if (OUT == 0)
				Z <= 1;
				
			//Detects a negative output
			if (OUT[DATA_WIDTH - 1] == 1)
				N <= 1;
				
			//Detects overflow when adding
			if (OUT[DATA_WIDTH - 1] == 1 && (A[DATA_WIDTH - 1] == 0 && B[DATA_WIDTH - 1] == 0))
				V <= 1;
			
			//Detects overflow when subtracting
			if (OUT[DATA_WIDTH - 1] == 0 && (A[DATA_WIDTH - 1] == 1 && B[DATA_WIDTH - 1] == 1))
				V <= 1;
				
		end
		
endmodule
	