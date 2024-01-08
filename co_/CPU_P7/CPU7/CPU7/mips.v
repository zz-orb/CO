`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:06:43 12/10/2023 
// Design Name: 
// Module Name:    MIPS 
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
module mips(
    input clk,                    // ʱ���ź�
    input reset,                  // ͬ����λ�ź�
    input interrupt,              // �ⲿ�ж��ź�
    output [31:0] macroscopic_pc, // ��� PC

    output [31:0] i_inst_addr,    // IM ��ȡ��ַ��ȡָ PC��
    input  [31:0] i_inst_rdata,   // IM ��ȡ����

    output [31:0] m_data_addr,    // DM ��д��ַ
    input  [31:0] m_data_rdata,   // DM ��ȡ����
    output [31:0] m_data_wdata,   // DM ��д������
    output [3 :0] m_data_byteen,  // DM �ֽ�ʹ���ź�

    output [31:0] m_int_addr,     // �жϷ�������д���ַ
    output [3 :0] m_int_byteen,   // �жϷ������ֽ�ʹ���ź�

    output [31:0] m_inst_addr,    // M �� PC

    output w_grf_we,              // GRF дʹ���ź�
    output [4 :0] w_grf_addr,     // GRF ��д��Ĵ������
    output [31:0] w_grf_wdata,    // GRF ��д������

    output [31:0] w_inst_addr     // W �� PC
);

wire [31:0] m_bridge_addr;
wire [31:0] m_bridge_rdata;
wire [31:0] m_bridge_wdata;
wire [3:0] m_bridge_byteen;

wire TC0_WE,TC1_WE;
wire IRQ0,IRQ1;
wire [31:0] TC0_RD;
wire [31:0] TC1_RD;


wire [31:0] WD;
assign m_data_addr = m_bridge_addr;
assign m_data_wdata = WD;
assign macroscopic_pc = m_inst_addr;
wire [5:0] HWInt;

CPU CPU(
    .clk(clk),
    .reset(reset),
    .i_inst_rdata(i_inst_rdata),
    .m_bridge_rdata(m_bridge_rdata),
    .HWInt(HWInt),

    .i_inst_addr(i_inst_addr),
    .m_bridge_addr(m_bridge_addr),
    .m_bridge_wdata(m_bridge_wdata),
    .m_bridge_byteen(m_bridge_byteen),
    .m_inst_addr(m_inst_addr),
    .w_grf_we(w_grf_we),
    .w_grf_addr(w_grf_addr),
    .w_grf_wdata(w_grf_wdata),
    .w_inst_addr(w_inst_addr)
);
Bridge Bridge(
    //
    .PrAddr(m_bridge_addr), 
    .PrWD(m_bridge_wdata),
    .PrWE(m_bridge_byteen),

    .DM_RD(m_data_rdata),
    .TC0_RD(TC0_RD),
    .TC1_RD(TC1_RD),

    .interrupt(interrupt),
    .IRQ0(IRQ0),
    .IRQ1(IRQ1),
    //
    .PrRD(m_bridge_rdata),
    .WD(WD),
    .DM_WE(m_data_byteen),
    .TC0_WE(TC0_WE),
    .TC1_WE(TC1_WE),
    .HWInt(HWInt),

    .m_int_addr(m_int_addr),
    .m_int_byteen(m_int_byteen)
    );
TC TC0(
    .clk(clk),
    .reset(reset),
    .Addr(m_bridge_addr[31:2]),
    .WE(TC0_WE),
    .Din(WD),

    .Dout(TC0_RD),
    .IRQ(IRQ0)
);
TC TC1(
    .clk(clk),
    .reset(reset),
    .Addr(m_bridge_addr[31:2]),
    .WE(TC1_WE),
    .Din(WD),

    .Dout(TC1_RD),
    .IRQ(IRQ1)
);

endmodule
