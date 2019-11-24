`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:01:30 11/15/2019 
// Design Name: 
// Module Name:    Start 
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
module Start(
    input startSwitch,
    input clk,
    output reg reset
    );
	 
always@ (posedge clk)
begin
	if(startSwitch == 1'b0)
		reset <= 1;
	else
		reset <= 0;
end


endmodule
