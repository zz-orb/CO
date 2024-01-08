`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:20:31 11/24/2023 
// Design Name: 
// Module Name:    MUX_GRF_WD 
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
module MUX_GRF_WD(
    input [1:0] Sel_GRF_WD,
    input [31:0] W_ALU_result,
    input [31:0] W_DM_RD,
    input [31:0] pc,
    output reg [31:0] GRF_WD
    );

    always @( *) begin
        case (Sel_GRF_WD)
            2'b00: begin
                GRF_WD = W_ALU_result;
            end
            2'b01: begin
                GRF_WD = W_DM_RD;
            end
            2'b10: begin
                GRF_WD = pc + 8;
            end
        endcase
    end

endmodule
