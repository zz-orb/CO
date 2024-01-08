`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:51:50 11/24/2023 
// Design Name: 
// Module Name:    HMUX_DM_M 
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
module HMUX_DM_M(
    input [1:0] FW_sel,
    input [31:0] M_GRF_RD,
    input [31:0] W_out,
    output [31:0] M_GRF_RD_f
    );

    assign M_GRF_RD_f = (FW_sel == 1'b1) ? W_out : M_GRF_RD;

endmodule
