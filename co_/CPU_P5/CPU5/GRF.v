`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:23:42 11/23/2023 
// Design Name: 
// Module Name:    GRF 
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
module GRF(
    input clk,
    input reset,
    input [31:0] pc,
    input WE,
    input [4:0] WA,
    input [31:0] WD,
    input [4:0] RA1,
    input [4:0] RA2,

    output [31:0] RD1,
    output [31:0] RD2
    );

    reg [31 : 0] Regs [31 : 0];
    integer i;

    //读出 内部转发
    assign RD1 = (WA == RA1 && WA && WE) ? WD : Regs [RA1];
    assign RD2 = (WA == RA2 && WA && WE) ? WD : Regs [RA2];
    
    //写入
    always @(posedge clk) begin
        if(reset)begin
            for (i = 0; i < 32; i = i + 1)begin
                Regs [i] <= 32'b0;
            end
        end
        else if(WE == 1'b1)begin
            if(WA != 5'b0)begin
                Regs[WA] <= WD;
                $display("%d@%h: $%d <= %h", $time, pc, WA, WD);
            end
        end
    end
endmodule
