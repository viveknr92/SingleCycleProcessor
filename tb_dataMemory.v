`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:49:42 11/01/2019
// Design Name:   DataMemory
// Module Name:   /home/012/v/vx/vxn170230/Desktop/Micro/SingleCycleComputer/tb_dataMemory.v
// Project Name:  SingleCycleComputer
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: DataMemory
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_dataMemory;

	// Inputs
	reg [31:0] MemAddr;
	reg [31:0] MemWriteData;
	reg MemWriteEnable;
	reg MemReadEnable;
	reg clk;
	reg reset;

	// Outputs
	wire [31:0] MemReadData;

	// Instantiate the Unit Under Test (UUT)
	DataMemory uut (
		.MemAddr(MemAddr), 
		.MemWriteData(MemWriteData), 
		.MemWriteEnable(MemWriteEnable), 
		.MemReadEnable(MemReadEnable), 
		.clk(clk), 
		.reset(reset), 
		.MemReadData(MemReadData)
	);

	initial begin
		// Initialize Inputs
		MemAddr = 0;
		MemWriteData = 0;
		MemWriteEnable = 0;
		MemReadEnable = 0;
		clk = 0;
		reset = 0;

		// Wait 100 ns for global reset to finish
		#100;
		#0 clk = 0;
		reset = 1;
		
		#2 reset = 0;
		#4 MemWriteEnable = 1; MemAddr = 32'h10; MemWriteData = 32'h4;
		#5 MemWriteEnable = 0;
		#6 MemReadEnable = 1;
		#7 $finish;
		// Add stimulus here

	end
	always 
	#1  clk =  ~ clk;
      
endmodule

