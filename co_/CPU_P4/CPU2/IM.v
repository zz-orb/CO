`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:44:34 11/05/2023 
// Design Name: 
// Module Name:    IM 
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
module IM(
    input [31:0] PC,
    output [31:0] instruction,
    output [5:0] Op,
    output [5:0] Func,
    output [4:0] rs,
    output [4:0] rt,
    output [4:0] rd,
    output [25:0] instr_index,
    output [15:0] Imm
    );

    reg [31:0]instruction_set[4095:0];
    initial begin
        $readmemh("code.txt", instruction_set);
    end
    wire [31:0] PC_ = PC - 32'h00003000;
    assign instruction = instruction_set[PC_[13:2]];

    assign Op = instruction[31:26];
    assign Func = instruction[5:0];
    assign rs = instruction[25:21];
    assign rt = instruction[20:16];
    assign rd = instruction[15:11];
    assign instr_index = instruction[25:0];
    assign Imm = instruction[15:0];
endmodule
