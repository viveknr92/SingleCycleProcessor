`timescale 1ps / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:52:36 03/04/2018
// Design Name:   Processor
// Module Name:   /home/012/v/vx/vxn170230/Desktop/CompArch/MIPS/TestBench_Processor.v
// Project Name:  MIPS
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Processor
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////
module TestBench_Proc;
	parameter DATA_WIDTH = 16;
	parameter INST_WIDTH = 16;
	parameter REG_WIDTH = 3;
	parameter ALU_OP = 3;
	parameter SWITCH_WIDTH = 8;
	parameter LED_WIDTH = 8;

	reg clk;
	reg [SWITCH_WIDTH - 1:0] sw;
	wire [LED_WIDTH - 1:0] Led;
	// Instantiate the Unit Under Test (UUT)
	Processor uut (
		.clk(clk), 
		.sw (sw),
		.Led (Led)
	);
	wire [INST_WIDTH - 1:0] PC = uut.PC;
	wire [INST_WIDTH - 1:0] instData = uut.instData;
	wire [DATA_WIDTH - 1:0] WriteBack = uut.WriteBack;
//	wire [ALU_OP - 1:0] ALUop = uut.ALUop ;
//	wire regWrite = uut.regWrite;
//	wire regDest = uut.regDest;
//	wire ALUsrc = uut.ALUsrc;
//	wire [REG_WIDTH - 1:0] regDestmuxOut = uut.regDestmuxOut ;
// wire [DATA_WIDTH - 1:0] Data1 = uut.Data1;
//	wire [DATA_WIDTH - 1:0] Data2 = uut.Data2;
//	wire [DATA_WIDTH - 1:0] ALU_OUT = uut.ALU_OUT;
//	wire [DATA_WIDTH - 1:0] MuxToAluData = uut.MuxToAluData;
//	wire Z = uut.Z;
//	wire C = uut.C;
	wire [DATA_WIDTH - 1:0] RegMem [0:4] = uut.RegFile.Register;
	wire [DATA_WIDTH - 1:0] RAM [0:1]= uut.datamemory.RAM;
	initial begin
		// Initialize Inputs
		#0 clk = 0; sw[0] = 0; sw[1] = 0;
		#2 sw[0] = 1;
		#100 sw[1] = 1;
		#1 $finish;
	end
	always #1 clk = ~clk;
endmodule

