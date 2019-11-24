`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:30:45 03/03/2018 
// Design Name: 
// Module Name:    SignExtend 
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
module SignExtend(inst_in,inst_out);
    input [IMM_DATA_WIDTH - 1:0] inst_in;
    output reg [DATA_WIDTH - 1:0] inst_out;
	 parameter DATA_WIDTH = 16;
	 parameter IMM_DATA_WIDTH = 7;
always @ (inst_in)
begin
	inst_out[IMM_DATA_WIDTH - 2:0] <= inst_in[IMM_DATA_WIDTH - 2:0];
	if(inst_in[IMM_DATA_WIDTH - 1] == 1'b1)
		inst_out[DATA_WIDTH - 1 : IMM_DATA_WIDTH - 1] <= 10'b1111111111;
	else
		inst_out[DATA_WIDTH - 1 : IMM_DATA_WIDTH - 1] <= 10'b0000000000;
	end
endmodule
