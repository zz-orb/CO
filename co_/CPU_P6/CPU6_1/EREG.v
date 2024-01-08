`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:33:52 11/23/2023 
// Design Name: 
// Module Name:    EREG 
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
module EREG(
    input clk,
    input reset,
    input clr,
    input [31:0] D_instr,
    input [31:0] D_pc,
    input [31:0] D_GRF_RD1,
    input [31:0] D_GRF_RD2,
    input [4:0] D_GRF_WA,
    input [31:0] D_EXT_out,
    input [1:0] Tnew_D,

    output reg [31:0] E_instr,
    output reg [31:0] E_pc,
    output reg [31:0] E_GRF_RD1,
    output reg [31:0] E_GRF_RD2,
    output reg [4:0] E_GRF_WA,
    output reg [31:0] E_EXT_out,
    output reg [1:0] Tnew_E
    );

    always @(posedge clk) begin 
        if (reset) begin
            E_instr <= 32'b0;
            E_pc <= 32'b0;
            E_GRF_RD1 <= 32'b0;
            E_GRF_RD2 <= 32'b0;
            E_GRF_WA <= 5'b0;
            E_EXT_out <= 32'b0;
        end
        else if (clr) begin
            E_instr <= 32'b0;
            E_GRF_RD1 <= 32'b0;
            E_GRF_RD2 <= 32'b0;
            E_GRF_WA <= 5'b0;
            E_EXT_out <= 32'b0;
        end
        else begin
            E_instr <= D_instr;
            E_pc <= D_pc;
            E_GRF_RD1 <= D_GRF_RD1;
            E_GRF_RD2 <= D_GRF_RD2;
            E_GRF_WA <= D_GRF_WA;
            E_EXT_out <= D_EXT_out;
            Tnew_E <= (Tnew_D > 0) ? Tnew_D - 1 : 0;          
        end
    end

endmodule
