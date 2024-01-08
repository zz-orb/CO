`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:49:30 11/24/2023 
// Design Name: 
// Module Name:    HMUX_ALU_E 
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
module HMUX_ALU_E(
    input [1:0] FW_sel,
    input [31:0] E_GRF_RD,
    input [31:0] W_out,
    input [31:0] M_out,
    output [31:0] E_GRF_RD_f
    );

    assign E_GRF_RD_f = (FW_sel == 2'b10) ? M_out :
                        (FW_sel == 2'b01) ? W_out : E_GRF_RD;
endmodule
