`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:30:49 11/05/2023 
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
module NPC(
    input [31:0] PC,
    input zero,
    input Branch,
    input [31:0] SignExt,
    input [25:0] instr_index,
    input jr,
    input [31:0] PC_RD1_jr,
    input jal,
    output [31:0] PC_4,
    output reg [31:0] NPC
    );

    assign PC_4 = PC + 32'h0000_0004;
    wire [31:0] PC_beq = PC + 32'h0000_0004 + {SignExt[29:0],{2{1'b0}}};

  always @(*) begin
    if (zero == 1'b1 && Branch == 1'b1)begin
            NPC = PC_beq;
        end
    else if(jr == 1'b1) begin
            NPC = PC_RD1_jr;
        end
    else if(jal == 1'b1) begin
            NPC = {PC[31:28],instr_index,{2{1'b0}}};
        end
    else begin
            NPC = PC_4;
        end
  end
endmodule
