section .data

section .text
global _start
_start:
    MOV eax,11
    MOV ecx,2
    IDIV ecx
    INT 80h