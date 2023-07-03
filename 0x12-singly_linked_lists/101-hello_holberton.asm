global _start

section .data
string: db "Hello, Holberton", 10, 0
length: equ $-string

section .text
_start:
mov rax, 1
mov rdi, 1
mov rsi, string
mov rdx, length
syscall

mov rax, 60
mov rdi, 0
syscall
