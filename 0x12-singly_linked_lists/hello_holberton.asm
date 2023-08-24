section .data
    hello db "Hello, Holberton", 0
    format db "%s", 10, 0  ; "%s" for string, 10 for newline, 0 to terminate the string

section .text
    global main
    extern printf

main:
    ; Push the address of the format string onto the stack
    lea rdi, [format]
    
    ; Push the address of the hello string onto the stack
    lea rsi, [hello]
    
    ; Call printf
    call printf
    
    ; Clean up the stack
    add rsp, 8
    
    ; Exit the program
    mov rax, 60         ; syscall number for exit
    xor rdi, rdi        ; status 0
    syscall
