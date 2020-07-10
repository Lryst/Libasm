section	.text
	global	ft_strdup
	extern	malloc
	extern	ft_strlen
	extern	ft_strcpy

ft_strdup:
	xor 	rax, rax
	xor		rbx, rbx		
	call	ft_strlen
	mov		rbx, rdi
	inc		rax				
	mov		rdi, rax			
	call	malloc
	xor		rdi, rdi
	mov		rdi, rax
	mov		rsi, rbx
	xor		rax, rax
	call 	ft_strcpy
	ret