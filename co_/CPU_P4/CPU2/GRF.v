`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:44:48 11/05/2023 
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
    input WE,
    input [4:0] WA,
    input [31:0] WD,
    input [4:0] RA1,
    input [4:0] RA2,
    input [31:0] PC,
    output [31:0] RD1,
    output [31:0] RD2,
    output [31:0] PC_RD1_jr
    );

    reg [31 : 0] Regs [31 : 0];

    //初始化
    integer i;
    initial begin
        for (i = 0; i < 32; i = i + 1)begin
            Regs [i] = 32'b0;
        end
    end

    //读出
    assign RD1 = Regs [RA1];
    assign RD2 = Regs [RA2];
    assign PC_RD1_jr = Regs [RA1];

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
                $display("@%h: $%d <= %h", PC, WA, WD);
            end
        end
    end
endmodule
