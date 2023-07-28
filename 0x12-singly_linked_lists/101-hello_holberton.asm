; File: 101-hello_holberton.asm
; Auth: Gedeon Obae Gekonge
; Desc: 64-bit assembly program that prints
;       Hello, Holberton followed by a new line.

extern printf, exit

section .data
   msg: db "Hello, Holberton", 0
   fmt: db "%s", 10, 0

section .text
   global main

main:
   push rbp

   mov rdi, fmt
   mov rsi, msg
   xor rax, rax ; Clear RAX (no vector registers used, equivalent to mov rax, 0)
   call printf

   pop rbp

   xor rax, rax ; Return value 0 (success)
   ret

