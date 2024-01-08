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
    input en,
    input [31:0] F_instr,
    input [31:0] F_pc,

    output reg [31:0] D_instr,
    output reg [31:0] D_pc
    );

    always @(posedge clk) begin
        if (reset) begin
            D_instr <= 32'b0;
            D_pc <= 32'b0;
        end
        else if (en) begin
            D_instr <= F_instr;
            D_pc <= F_pc;
        end
    end

endmodule
