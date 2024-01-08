`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:19:51 11/24/2023 
// Design Name: 
// Module Name:    MUX_GRF_WA 
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
module MUX_GRF_WA(
    input [1:0] Sel_GRF_WA,
    input [4:0] D_instr_rd,
    input [4:0] D_instr_rt,
    output reg [4:0] GRF_WA
    );

    always @( *) begin
        case (Sel_GRF_WA)
            2'b00: begin
                GRF_WA = D_instr_rt;
            end
            2'b01: begin
                GRF_WA = D_instr_rd;
            end
            2'b10: begin
                GRF_WA = 31;
            end
        endcase
    end

endmodule
