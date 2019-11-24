`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:19:46 02/16/2018 
// Design Name: 
// Module Name:    RegFile 
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
module RegFile(readAddr1, readAddr2, writeAddr, writeData, regWrite, readData1, readData2, sw, reset, clk, Led);
parameter DATA_WIDTH = 16;
parameter REG_WIDTH  = 3;
parameter SWITCH_WIDTH = 8;
parameter LED_WIDTH = 8;
	
input reset;
input clk;
input [REG_WIDTH - 1 : 0] readAddr1;
input [REG_WIDTH - 1 : 0] readAddr2;
input [REG_WIDTH - 1 : 0] writeAddr;
input [DATA_WIDTH - 1 : 0] writeData;
input regWrite;
input [SWITCH_WIDTH - 1:0] sw;
output reg [DATA_WIDTH - 1 : 0] readData1;
output reg [DATA_WIDTH - 1 : 0] readData2;
output reg [LED_WIDTH - 1:0] Led;


reg [DATA_WIDTH - 1:0] Register[0:4]; //2^3 x 16 DATA_WIDTH

always@(*)
begin
	if (reset) begin
		readData1 <= 0;
		readData2 <= 0;
	end	
	 else begin
	  if(readAddr1 == 0)
			readData1 <= 0;
	  else
			readData1 <= Register[readAddr1];
	  if(readAddr2 == 0)
			readData2 <= 0;
	  else
			readData2 <= Register[readAddr2];
		end
end

always@ (posedge clk) begin
    if(regWrite) begin
        Register[writeAddr] <= writeData;
    end
end

always@(*) begin
	if (sw[1] == 1'b1)
		Led <= Register[1][LED_WIDTH - 1:0];
		
	else if (sw[2] == 1'b1)
		Led <= Register[2][LED_WIDTH - 1:0];
		
	else if (sw[3] == 1'b1)
		Led <= Register[3][LED_WIDTH - 1:0];
		
	else if (sw[4] == 1'b1)
		Led <= Register[4][LED_WIDTH - 1:0];
		
	else
		Led <= 0;
end
   
endmodule

