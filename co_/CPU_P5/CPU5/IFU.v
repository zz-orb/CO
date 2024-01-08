`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:08:35 11/23/2023 
// Design Name: 
// Module Name:    IFU 
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
module IFU(
    input clk,
    input reset,
    input en,
    input [31:0] npc,
    
    output reg [31:0] pc,
    output [31:0] instr
    );

    reg [31:0]instruction_set[4095:0];
    initial begin
        $readmemh("code.txt", instruction_set);
    end

    always @(posedge clk) begin
    if(reset == 1'b1) begin
        pc <= 32'h00003000;
        end
    else if(en == 1'b0) begin
        pc <= pc;
        end
    else begin
        pc <= npc;
        end
    end

    wire [31:0] pc_ = pc - 32'h00003000;
    assign instr = instruction_set[pc_[13:2]];

endmodule
