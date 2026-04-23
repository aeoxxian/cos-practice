.text
.global decode
decode:
    # x in %rdi, y in %rsi, z in %rdx, p in %rcx
    movq %rsi, %r8      # t = y
    movq %rdx, %rsi     # y = z
    movq %rdi, %rdx     # z = x
    movq %r8, %rdi      # x = t
    addq %rsi, %rdi
    addq %rdx, %rdi
    movq %rdi, (%rcx)
    ret
