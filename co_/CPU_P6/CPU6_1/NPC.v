`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:08:13 11/23/2023 
// Design Name: 
// Module Name:    NPC 
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
`define order 3'b000
`define B_type 3'b001
`define jal 3'b010
`define jr 3'b011
module NPC(
    input [31:0] F_pc,
    input [31:0] D_pc,
    input [2:0] NPC_op,
    input [31:0] instr_offset_ext,
    input [25:0] instr_index,
    input [31:0] pc_rs,
    input judge_b,

    output reg [31:0] npc
    );

    wire [31:0] pc_4;
	assign pc_4 = F_pc + 32'h0000_0004;
    wire [31:0] pc_beq = D_pc + 32'h0000_0004 + {instr_offset_ext[29:0],{2{1'b0}}};

    always @(*) begin
    case(NPC_op)
        `order: begin
            npc = pc_4;        
        end
        `B_type: begin
            if(judge_b == 1'b1) begin
                npc = pc_beq;
            end
            else begin
                npc = pc_4;
            end
        end
        `jal: begin
            npc = {D_pc[31:28],instr_index,{2{1'b0}}};
        end
        `jr: begin
            npc = pc_rs;
        end
    endcase
    end
endmodule
