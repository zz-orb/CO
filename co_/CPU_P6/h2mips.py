pc = 0x00003000
# with open("p6_testcode.txt", "r") as file:
#     content = file.read()
with open("p6.txt", "w") as f:
    while (op := input()):
        print("%08x: %s" % (pc, op),file=f)
        pc += 4