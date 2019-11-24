`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:13:19 10/31/2019 
// Design Name: 
// Module Name:    DataMemory 
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
module DataMemory(
    input [DATA_WIDTH - 1:0] MemAddr,
    input [DATA_WIDTH - 1:0] MemWriteData,
    input MemWriteEnable,
	 input MemReadEnable,
	 input clk,
    output reg [DATA_WIDTH - 1:0] MemReadData
    );
parameter DATA_WIDTH = 16;
	  
reg [DATA_WIDTH - 1:0] RAM[0:1];  // 8 words of 16-bit memory

always @(posedge clk) begin
	if (MemWriteEnable == 1'b1 && MemReadEnable == 1'b0)
		RAM[MemAddr] <= MemWriteData;
end

always@(*) begin
	if (MemReadEnable == 1'b1 && MemWriteEnable == 1'b0)
		MemReadData <= RAM[MemAddr];
	else
		MemReadData <= 16'h0;
end

//always@(*) begin
//	if (sw[1] == 1'b1)
//		Led <= RAM[1];
//	else 
//		Led <= 0;
//end

endmodule
