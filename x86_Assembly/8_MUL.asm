section .data

section .text
global _start
_start:
    MOV al,0xff
    MOV bl,2
    IMUL bl
    INT 80h