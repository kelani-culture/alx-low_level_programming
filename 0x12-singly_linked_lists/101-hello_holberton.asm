section .data
    msg db 'Hello, Holberton', 0x0A, 0x00
    format db '%s', 0x00

section .text
    global main
    extern printf

main:
    push rbp
    mov rbp, rsp

    push qword msg
    push qword format
    call printf
    add rsp, 16

    mov rsp, rbp
    pop rbp
    mov rax, 0
    ret
