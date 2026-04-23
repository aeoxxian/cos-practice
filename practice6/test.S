.text
.global test
test:
    # short arguments arrive in %di, %si, %dx
    movswq %di, %rdi   # x
    movswq %si, %rsi   # y
    movswq %dx, %rdx   # z

    movq %rdx, %rax    # val = z
    addq %rsi, %rax    # val = z + y
    subq %rdi, %rax    # val = z + y - x

    cmpq $5, %rdx
    jle .Lcheck_low

    cmpq $2, %rsi
    jle .Ldiv_y

    movq %rdx, %r8     # save z as divisor
    movq %rdi, %rax    # x
    cqto
    idivq %r8          # x / z

.Ldiv_y:
    movq %rdi, %rax    # x
    cqto
    idivq %rsi         # x / y
    jmp .Ldone

.Lcheck_low:
    cmpq $2, %rdx
    jg .Ldone

    movq %rdx, %rax    # z
    cqto
    idivq %rsi         # z / y

.Ldone:
    ret
