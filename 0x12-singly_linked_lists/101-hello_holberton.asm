section .data
    hello db "Hello, Holberton", 0
    newline db 10

section .text
    global main
    extern printf
    main:
        push rbp
        mov rdi, format
        mov rsi, hello
        call printf
        mov rdi, newline
        call putchar
        pop rbp
        ret

section .data
    format db "%s",0

