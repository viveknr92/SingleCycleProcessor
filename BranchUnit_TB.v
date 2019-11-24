`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:52:36 11/07/2019
// Design Name:   BranchUnit
// Module Name:   /home/ise/SharedFolder/SingleCycleComputer/BranchUnit_TB.v
// Project Name:  SingleCycleComputer
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: BranchUnit
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module BranchUnit_TB;

	// Inputs
	reg [15:0] Immediate;
	reg branch;
	reg zero;

	// Outputs
	wire [31:0] PC;

	// Instantiate the Unit Under Test (UUT)
	BranchUnit uut (
		.Immediate(Immediate), 
		.branch(branch), 
		.zero(zero), 
		.PC(PC)
	);

	initial begin
		// Initialize Inputs
		Immediate = 0;
		branch = 0;
		zero = 0;

		// Wait 100 ns for global reset to finish
		#2;
		Immediate = 16'h1;
		branch = 1;
		zero = 1;
		
		#10 $finish;
		
        
		// Add stimulus here

	end
      
endmodule

