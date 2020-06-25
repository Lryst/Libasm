section .text
    global _ft_strlen
_ft_strlen:
    xor rax,rax
    jmp compar
incr:
    inc rax
compar:
    cmp BYTE [rdi + rax],0
    jnz incr
    ret