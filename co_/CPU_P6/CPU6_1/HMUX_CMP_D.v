`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:45:28 11/24/2023 
// Design Name: 
// Module Name:    HMUX_CMP_D 
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
module HMUX_CMP_D(
    input [1:0] FW_sel,
    input [31:0] D_GRF_RD,
    input [31:0] M_out,
    input [31:0] E_out,
    output [31:0] D_GRF_RD_f
    );

    assign D_GRF_RD_f = (FW_sel == 2'b10) ? E_out :
                        (FW_sel == 2'b01) ? M_out : D_GRF_RD;
endmodule
