`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:54:51 11/09/2023
// Design Name:   mips
// Module Name:   C:/Users/hp/Desktop/CPU2/CPU2/mips_tb.v
// Project Name:  CPU2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mips
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module mips_tb;

	// Inputs
	reg clk;
	reg reset;

	// Instantiate the Unit Under Test (UUT)
	mips uut (
		.clk(clk), 
		.reset(reset)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;


		// Wait 100 ns for global reset to finish
		#100;
        reset = 0;
		// Add stimulus here

	end

	
	always #5 clk = ~clk;
      
endmodule

