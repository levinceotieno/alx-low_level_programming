section .data
    hello db "Hello, Holberton", 0

section .text
    extern printf
    global main

main:
    ; Set up the stack frame (optional in x86_64)
    push rbp
    mov rbp, rsp

    ; Call printf with the address of the string 'hello'
    lea rdi, [hello]
    call printf

    ; Clean up the stack frame and return
    mov rsp, rbp
    pop rbp
    ret

