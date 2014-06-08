#as -arch i386 -o test.o test.s
#ld -e _start -o test test.o
.section .text,
.globl _start
_start:
movl $1,%eax
movl %eax,%ebx
int $0x80
