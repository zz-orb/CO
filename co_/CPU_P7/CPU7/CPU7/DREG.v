`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:29:04 11/23/2023 
// Design Name: 
// Module Name:    DREG 
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
module DREG(
    input clk,
    input reset,
    input Req,
    input en,
    input [31:0] F_instr,
    input [31:0] F_pc,
    input AdEL_F,
	 input F_BD,

    output reg [31:0] D_instr,
    output reg [31:0] D_pc,
    output reg [4:0] D_ExcCode,
	 output reg D_BD
    );

    always @(posedge clk) begin
        if (reset | Req) begin
            D_instr <= 32'b0;
            D_pc <= Req ? 32'h0000_4180 : 0;
            D_ExcCode <= 5'b0;
				D_BD <= 0;
        end
        else if (en) begin
            D_instr <= AdEL_F ? 32'b0 : F_instr;
            D_pc <= F_pc;
            D_ExcCode <= AdEL_F ? 5'd4 : 5'd0;
				D_BD <= F_BD;
        end
    end

endmodule
