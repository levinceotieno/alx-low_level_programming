section .data

section .text
    global _start

_start:
    ; Call the C function that calls printf
    call print_hello_c

    ; Exit the program
    mov rax, 60         ; syscall number for exit
    xor rdi, rdi        ; status code 0
    syscall

section .bss
    ; Define the print_hello_c function symbol so that nasm will not throw an error
    print_hello_c resb 1

