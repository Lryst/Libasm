section .text
    global ft_strlen

ft_strlen:
    xor rdx,rdx
    mov rbp,rsp
    mov rax, rdi
inc:
    inc [rax]
end:
    leave
    ret