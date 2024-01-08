`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:07:37 12/09/2023 
// Design Name: 
// Module Name:    ExcCode_Judge 
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
`define StartInstr 32'h0000_3000
`define EndInstr 32'h0000_6FFF
`define StartAddrTC0 32'h0000_7F00
`define EndAddrTC0  32'h0000_7F0B
`define StartAddrTC1 32'h0000_7F10
`define EndAddrTC1 32'h0000_7F1B
`define StartAddrDM 32'h0000_0000
`define EndAddrDM 32'h0000_2FFF

//load
`define lw_Op 6'b100011
`define lb_Op 6'b100000
`define lh_Op 6'b100001 
//store
`define sw_Op 6'b101011
`define sb_Op 6'b101000
`define sh_Op 6'b101001

`define R_type_Op 6'b000000
//R_type cal_R
`define R_add_Func 6'b100000
`define R_sub_Func 6'b100010
//R_type cal_I
`define addi_Op 6'b001000

`define AdELcode 5'd4
`define AdEScode 5'd5
`define Syscallcode 5'd8
`define RIcode 5'd10
`define Ovcode 5'd12 
module ExcCode_Judge(
    input [31:0] M_pc,
    input [31:0] M_ALU_result,
    input M_RI,
    input M_ALU_OverFlow,

    output [4:0] ExcCode
    );

    wire Int;
    wire AdEL,AdEL_F,AdEL_E,AdEL_M;
    wire AdES,AdES_E,AdES_M;
    wire Syscall;
    wire RI;
    wire Ov;

    wire Op = M_pc[31:26];
    wire Func = M_pc[5:0];
    wire load,lw,lh,lb,store,sw,sh,sb;
    wire syscall;
    assign syscall = (Op == `R_type_Op && Func == 6'b001100) ? 1'b1 : 1'b0;
    assign load = lw | lb | lh;
    assign lw = (Op == `lw_Op) ? 1'b1 : 1'b0;
    assign lb = (Op == `lb_Op) ? 1'b1 : 1'b0;
    assign lh = (Op == `lh_Op) ? 1'b1 : 1'b0;
    assign store = sw | sb | sh;
    assign sw = (Op == `sw_Op) ? 1'b1 : 1'b0;
    assign sb = (Op == `sb_Op) ? 1'b1 : 1'b0;
    assign sh = (Op == `sh_Op) ? 1'b1 : 1'b0;
    assign add = (Op == `R_type_Op && Func == `R_add_Func) ? 1'b1 : 1'b0;
    assign sub = (Op == `R_type_Op && Func == `R_sub_Func) ? 1'b1 : 1'b0;
    assign addi = (Op == `addi_Op) ? 1'b1 : 1'b0;
//F
//PC address Exception
    assign AdEL_F = ((|M_pc[1:0]) | (M_pc < `StartInstr) | (M_pc > `EndInstr));
//D
//Illegal Opcode
    assign Syscall = syscall ? 1'b1 : 1'b0;  //?
    assign RI = M_RI;
//E
//Overflow
    assign Ov = ((add | addi | sub) && M_ALU_OverFlow == 1'b1) ? 1'b1 : 1'b0;
    assign AdEL_E = (load && M_ALU_OverFlow == 1'b1) ? 1'b1 : 1'b0;                                             //计算地址时加法溢出
    assign AdES_E = (store && M_ALU_OverFlow == 1'b1) ? 1'b1 : 1'b0;                                                  //计算地址时加法溢出
//M
//Data address Expection
    assign AdEL_M = (lw && (M_ALU_result[0] | M_ALU_result[1])) ? 1'b1 :                                        //lw未字对齐
			        (lh && M_ALU_result[0]) ? 1'b1 :                                                            //lh未半字对齐
			        ((lh | lb) && (M_ALU_result >= `StartAddrTC0 && M_ALU_result <= `EndAddrTC0)) ? 1'b1 :      //取Timer寄存器的值
			        ((lh | lb) && (M_ALU_result >= `StartAddrTC1 && M_ALU_result <= `EndAddrTC1)) ? 1'b1 : 
			        (load && (M_ALU_result > 32'h00007f23)) ? 1'b1 :                                  //取数地址超出上限
			        (load && (M_ALU_result > 32'h00007f1b && M_ALU_result < 32'h00007f20)) ? 1'b1 :                              
			        (load && (M_ALU_result > 32'h00007f0b && M_ALU_result < 32'h00007f10)) ? 1'b1 : 
			        (load && (M_ALU_result > 32'h00002fff && M_ALU_result < 32'h00007f00)) ? 1'b1 : 1'b0; 

    assign AdES_M = (sw && (M_ALU_result[0] | M_ALU_result[1])) ? 1'b1 :                                        //sw未字对齐
                    (sh == 1'b1 && M_ALU_result[0]) ? 1'b1 :                                                    //sh未半字对齐
                    ((sh | sb) && (M_ALU_result >= `StartAddrTC0 && M_ALU_result <= `EndAddrTC0)) ? 1'b1 :      //存Timer寄存器的值
                    ((sh | sb) && (M_ALU_result >= `StartAddrTC1 && M_ALU_result <= `EndAddrTC1)) ? 1'b1 :
                    (store && (M_ALU_result == 32'h00007f08 || M_ALU_result == 32'h00007f18)) ? 1'b1 : //向计时器的Count存值
                    (store && (M_ALU_result > 32'h00007f23)) ? 1'b1 :                                  //存数地址超出上限
                    (store && (M_ALU_result > 32'h00007f1b && M_ALU_result < 32'h00007f20)) ? 1'b1 : 
                    (store && (M_ALU_result > 32'h00007f0b && M_ALU_result < 32'h00007f10)) ? 1'b1 : 
                    (store && (M_ALU_result > 32'h00002fff && M_ALU_result < 32'h00007f00)) ? 1'b1 : 1'b0;
//Hardware Interrupt

    assign ExcCode = AdEL_F ? `AdELcode :
                    Syscall ? `Syscallcode :
                    RI ? `RIcode :
                    Ov ? `Ovcode :
                    AdEL_E ? `AdELcode :
                    AdES_E ? `AdEScode :
                    AdEL_M ? `AdELcode :
                    AdES_M ? `AdEScode : 5'b0;
endmodule
