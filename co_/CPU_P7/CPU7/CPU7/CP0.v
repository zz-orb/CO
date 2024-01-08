`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:09:35 12/08/2023 
// Design Name: 
// Module Name:    CP0 
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
`define IM SR[15:10]        //允许的外部中断 Interrupt Mask
`define EXL SR[1]           //核心态 Exception Level
`define IE SR[0]            //全局中断使能 Interrupt Enable
`define BD Cause[31]        //Branch Delay
`define IP Cause[15:10]     //外部中断 Interrupt Pending
`define ExcCode Cause[6:2]  //异常编码 ExcCode
module CP0(
    input clk,
    input reset,
    input en,   //
    input [4:0] CP0Add,
    input [31:0] CP0In,
    output [31:0] CP0Out,

    input [31:0] VPC,
    input BDIn,
    input [4:0] ExcCodeIn,
    input [5:0] HWInt,
    input EXLClr,
    output [31:0] EPCOut,
    output Req
    );

    reg [31:0] SR = 32'b0;      //12
    reg [31:0] Cause = 32'b0;   //13
    reg [31:0] EPC = 32'b0;     //14


    assign CP0Out = (CP0Add == 12) ? SR :
                    (CP0Add == 13) ? Cause :
                    (CP0Add == 14) ? EPC : 0;

    assign EPCOut = EPC;

    wire IntReq = |(HWInt & `IM) & `IE & !`EXL; // 允许当前中断 且 不在中断异常中 且 允许中断发生
    wire ExcReq = (|ExcCodeIn) & !`EXL; // 存在异常 且 不在中断中
    assign Req  = IntReq | ExcReq;

    integer i;
  always @(posedge clk) begin
    if (reset == 1'b1) begin
        SR <= 32'b0;
        Cause <= 32'b0;
        EPC <= 32'b0;
    end
    else begin
        if (en == 1'b1) begin
            case (CP0Add)
            12: SR <= CP0In;
            13: Cause <= CP0In;
            14: EPC <= CP0In;
            endcase
        end

        if (Req == 1'b1) begin // int|exc
            `EXL <= 1'b1;
            `ExcCode <= IntReq ? 5'b0 : ExcCodeIn;   
            EPC <= (BDIn == 1'b1) ? VPC - 32'd4 : VPC; 
            `BD <= BDIn;
        end

        if (EXLClr == 1'b1) begin
            `EXL <= 1'b0;
        end

        `IP <= HWInt; ////每周期更新IP的值
    end
  end

endmodule
