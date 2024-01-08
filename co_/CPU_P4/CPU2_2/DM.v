`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:10:08 11/05/2023 
// Design Name: 
// Module Name:    DM 
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
module DM(
    input clk,
    input reset,
    input MemWrite,
    input [11:0] A,
    input [31:0] D,
    input [31:0] PC,
    output [31:0] RD
    );

    reg [31:0] DataMem [4095:0];

    //初始化
    integer i;
    initial begin
        for (i = 0; i < 4096; i = i + 1)begin
            DataMem [i] = 32'b0;
        end
    end
    
    //写入
    always @(posedge clk) begin
        if(reset)begin
            for (i = 0; i < 4096; i = i + 1)begin
            DataMem [i] = 32'b0;
        end
        end
        else if(MemWrite)begin
            DataMem [A] <= D;
            $display("@%h: *%h <= %h", PC, {{18{1'b0}},A,{2{1'b0}}}, D);
        end
    end

    //读出
    assign RD = DataMem [A];

endmodule
