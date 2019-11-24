`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:45:33 03/03/2018 
// Design Name: 
// Module Name:    Processor 
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
module Processor(clk, sw, Led);
input clk;
input [SWITCH_WIDTH - 1:0] sw;
output [LED_WIDTH - 1:0] Led;

	parameter SWITCH_WIDTH = 8;
	parameter LED_WIDTH = 8;
	parameter DATA_WIDTH = 16;
	parameter INST_WIDTH = 16;
	parameter REG_WIDTH = 3;
	parameter ALU_OP = 3;

	wire [DATA_WIDTH - 1:0] WriteBack;
	wire [INST_WIDTH - 1:0] PC;
	wire[INST_WIDTH - 1:0]instData;
	wire branch;
	wire Z;
	wire reset;
	Start start(
			 .startSwitch (sw[0]),
			 .clk (clk),
			 .reset (reset)
			 );
			 
	parameter IMM_DATA_WIDTH = 7;
	wire [DATA_WIDTH - 1:0] ImmExt;

	SignExtend signextend(.inst_in (instData[IMM_DATA_WIDTH - 1:0]),
								.inst_out(ImmExt));

	BranchUnit BranchUnit(.clk(clk),
					 .reset(reset),
					 .Immediate (ImmExt),
					 .branch(branch),
					 .zero(Z),
					 .PC(PC));
					 
	Inst_Mem Inst_Mem(.addr (PC),
							.data (instData));

	wire[ALU_OP - 1:0]ALUop;
	wire regWrite;
	wire regDest;
	wire ALUsrc;
	wire MemWriteEnable;
	wire MemReadEnable;
	wire MemToReg;
	Control Control(.opcode(instData[15:13]),
					  .clk(clk),
					  .regWrite(regWrite),
					  .regDest(regDest),
					  .ALUsrc(ALUsrc),
					  .ALUControl(ALUop), 
					  .MemWriteEnable(MemWriteEnable), 
					  .MemReadEnable(MemReadEnable), 
					  .MemToReg(MemToReg), 
					  .branch(branch));

	wire [REG_WIDTH - 1:0] regDestmuxOut;
	mux_5bit mux_5bit(.input1(instData[9:7]),
						  .input2(instData[6:4]),
						  .sel(regDest),
						  .output1(regDestmuxOut));

	wire[DATA_WIDTH - 1:0] Data1;
	wire[DATA_WIDTH - 1:0] Data2;
	RegFile RegFile(.readAddr1(instData[12:10]),
					  .readAddr2(instData[9:7]),
					  .writeAddr(regDestmuxOut),
					  .writeData(WriteBack), 
					  .regWrite(regWrite), 
					  .readData1(Data1), 
					  .readData2(Data2), 
					  .sw(sw), 
					  .reset(reset), 
					  .clk(clk), 
					  .Led (Led));

	wire [DATA_WIDTH - 1:0]MuxToAluData;
	ALUmux ALUmux(.immData(ImmExt),
					  .RegData(Data2),
					  .ALUsrc(ALUsrc),
					  .OutData(MuxToAluData));

	wire V;
	wire N;
	wire C;
	wire [DATA_WIDTH - 1:0]ALU_OUT; 
	ALU ALU(.A(Data1),
			  .B(MuxToAluData),
			  .Cin(1'b0),
			  .op(ALUop),
			  .OUT(ALU_OUT),
			  .Z(Z),
			  .V(V),
			  .N(N),
			  .C(C));

	wire [DATA_WIDTH - 1:0]MemDataOut; 
	DataMemory datamemory(.MemAddr (ALU_OUT),
								 .MemWriteData (Data2),
								 .MemWriteEnable (MemWriteEnable),
								 .MemReadEnable (MemReadEnable),
								 .clk (clk),
								 .MemReadData (MemDataOut)
								 );

	WriteBackMux writebackmux (.MemToReg(MemToReg), 
								.ALU_OUT(ALU_OUT), 
								.MemDataOut(MemDataOut), 
								.WriteBack(WriteBack));

endmodule
