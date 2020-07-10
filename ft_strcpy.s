section .text
	global ft_strcpy
ft_strcpy:
	xor		rcx,rcx
	xor		rax,rax
copy:
	mov		al, BYTE[rsi + rcx]
	mov		BYTE[rdi + rcx], al
incr:
	inc		rcx
compar:
	cmp		BYTE [rsi + rcx],0
	jne		copy
	mov		rax,rdi
	ret