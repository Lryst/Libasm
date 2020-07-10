section .text
	global	ft_strcmp
ft_strcmp:
	xor 	rcx, rcx			
	xor 	rax, rax			
comp:
	xor 	al, al
	sub 	al, byte[rsi + rcx]
	add 	al, byte[rdi + rcx]
	jz		incr
	movsx	rax, al
	ret
incr:
	inc     rcx
	cmp     BYTE[rdi + rcx], 0
	jnz 	comp
	cmp 	BYTE[rsi + rcx], 0
	jnz		comp
	mov 	rax, 0
	ret