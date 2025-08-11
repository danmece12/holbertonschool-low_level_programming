; 100-hello_world.asm
; Prints "Hello, World" followed by a newline using only the write syscall.
; Built with: nasm -f elf64 100-hello_world.asm && gcc -no-pie -std=gnu89 100-hello_world.o -o hello

        bits 64

        section .data
msg:    db  "Hello, World", 10          ; newline at the end
len     equ $ - msg

        section .text
        global main

; int main(void)
main:
        ; write(1, msg, len)
        mov     rax, 1                  ; SYS_write
        mov     rdi, 1                  ; fd = stdout
        mov     rsi, msg                ; buf
        mov     rdx, len                ; count
        syscall

        xor     eax, eax                ; return 0
        ret
