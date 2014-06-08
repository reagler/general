    .text
.globl _doSomething             # Our doSomething function.
_doSomething:
    pushl   %ebp
    movl    %esp, %ebp
    subl    $8, %esp
    nop                         # does nothing.
    leave
    ret
.globl _main
_main:
    pushl   %ebp
    movl    %esp, %ebp
    subl    $24, %esp           # 8 to align, 16 for our 4-byte parameter and padding.
    movl    $3, (%esp)          # write our parameter at the end of the stack (i.e. padding goes first).
    call    _doSomething        # call doSomething.
    movl    $0, %eax
    leave
    ret
