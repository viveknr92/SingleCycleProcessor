`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:39:30 03/03/2018 
// Design Name: 
// Module Name:    ALUmux 
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
module ALUmux(immData,RegData,ALUsrc,OutData);
parameter DATA_WIDTH = 16;
    input [DATA_WIDTH - 1:0] immData;
    input [DATA_WIDTH - 1:0] RegData;
    input ALUsrc;
    output reg [DATA_WIDTH - 1:0] OutData;

always@(*)
begin
	if(ALUsrc)
		OutData = immData;
	else
		OutData = RegData;
	end
endmodule
