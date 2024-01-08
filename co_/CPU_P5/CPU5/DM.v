`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:15:00 11/23/2023 
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
    input [31:0] pc,
    input WE,
    input [11:0] WA,
    input [31:0] WD,

    output [31:0] RD
    );

    reg [31:0] DataMem [4095:0];
    integer i;
    //写入
    always @(posedge clk) begin
        if(reset)begin
            for (i = 0; i < 4096; i = i + 1) begin
                DataMem [i] = 32'b0;
            end
        end
        else if(WE) begin
            DataMem [WA] <= WD;
            $display("%d@%h: *%h <= %h", $time, pc, {{18{1'b0}},WA,{2{1'b0}}}, WD);
        end
    end

    //读出
    assign RD = DataMem [WA];

endmodule
