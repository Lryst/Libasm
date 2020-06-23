section .text
    global _ft_strlen
_ft_strlen:
    xor rdx,rdx
    mov rbp,rsi

loop:
    mov al, rbx
    test al,al
    jz end
    inc edx
    inc ebx
    jmp loop

end:
    mov eax,4
    mov ebx,1
    mov ecx,rsi
    mov edx,rbx
    int 80h