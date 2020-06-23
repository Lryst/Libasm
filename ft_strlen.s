BITS 64
    GLOBAL ft_strlen:function
    section.text
ft_strlen:
    push rbp;
    mov rbp,rsp

    mov rax, rdi

    leave
    ret