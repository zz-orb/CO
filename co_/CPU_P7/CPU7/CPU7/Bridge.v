`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:14:53 12/10/2023 
// Design Name: 
// Module Name:    Bridge 
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
`define StartAddrDM 32'h0000_0000
`define EndAddrDM 32'h0000_2FFF
`define StartInstr 32'h0000_3000
`define EndInstr 32'h0000_6FFF
`define StartAddrTC0 32'h0000_7F00
`define EndAddrTC0  32'h0000_7F0B
`define StartAddrTC1 32'h0000_7F10
`define EndAddrTC1 32'h0000_7F1B

module Bridge(
    //
    input [31:0] PrAddr, 
    input [31:0] PrWD,
    input [3:0] PrWE,

    input [31:0] DM_RD,
    input [31:0] TC0_RD,
    input [31:0] TC1_RD,

    input interrupt,
    input IRQ0,
    input IRQ1,
    //
    output [31:0] PrRD,
    output [31:0] WD, //写入外设的数据
    output [3:0] DM_WE,
    output TC0_WE,
    output TC1_WE,
    output [5:0] HWInt,

    output [31:0] m_int_addr,
    output [3:0] m_int_byteen
    );

    assign PrRD = (PrAddr >= `StartAddrDM && PrAddr <= `EndAddrDM) ? DM_RD :
                (PrAddr >= `StartAddrTC0 && PrAddr <= `EndAddrTC0) ? TC0_RD :
                (PrAddr >= `StartAddrTC1 && PrAddr <= `EndAddrTC1) ? TC1_RD : 0;

    assign WD = PrWD;

    assign DM_WE =  (PrAddr >= `StartAddrDM && PrAddr <= `EndAddrDM) ? PrWE : 4'b0;
    assign TC0_WE = ((PrAddr >= `StartAddrTC0 && PrAddr <= `EndAddrTC0) && (&PrWE)) ? 1'b1 : 1'b0;
    assign TC1_WE = ((PrAddr >= `StartAddrTC1 && PrAddr <= `EndAddrTC1) && (&PrWE)) ? 1'b1 : 1'b0;

    assign HWInt = {3'b0, interrupt, IRQ1, IRQ0};

    wire Int_sel = (PrAddr >= 32'h7f20) && (PrAddr <= 32'h7f23); //&& (|PrWE == 1'b1);
    assign m_int_addr = Int_sel  ? PrAddr : 32'h0;
    assign m_int_byteen = Int_sel  ? PrWE : 4'b0;
endmodule
