ori $a0, $0, 123
ori $a1, $a0, 456
lui $a2, 123            # ����λΪ 0
lui $a3, 0xffff         # ����λΪ 1
ori $a3, $a3, 0xffff    # $a3 = -1
add $s0, $a0, $a2      # ����
add $s1, $a0, $a3      # ����
add $s2, $a3, $a3      # ����
ori $t0, $0, 0x0000
sw $a0, 0($t0)
sw $a1, 4($t0)
sw $a2, 8($t0)
sw $a3, 12($t0)
sw $s0, 16($t0)
sw $s1, 20($t0)
sw $s2, 24($t0)
lw $a0, 0($t0)
lw $a1, 12($t0)
sw $a0, 28($t0)
sw $a1, 32($t0)
ori $a0, $0, 1
ori $a1, $0, 2
ori $a2, $0, 1
beq $a0, $a1, loop1     # �����
beq $a0, $a2, loop2     # ���
loop1:sw $a0, 36($t0)
loop2:sw $a1, 40($t0)
ori $t1, 100
sw $s0, -4($t1)  #offsetΪ����
lw $0, 0($t0)    #����$0����
loop3:
add $t0, $t0, $a0
beq $a0, $t0, loop3     # ��� ��Ŀ���ڴ�ָ��֮ǰ
