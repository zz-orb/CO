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
module PC(
    input clk,
    input reset,
    input Req,
    input en,           //stall
    input [31:0] npc,
    
    output reg [31:0] pc
    );    

    always @(posedge clk) begin
    if(reset == 1'b1) begin
        pc <= 32'h00003000;
        end
    else if(Req == 1'b1) begin
        pc <= 32'h00004180;
    end
    else if(en == 1'b0) begin
        pc <= pc;
        end
    else 
        begin
            pc <= npc;
        end
    end

endmodule
