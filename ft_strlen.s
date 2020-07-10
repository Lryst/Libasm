section .text
	global ft_strlen
ft_strlen:
	xor 	rax,rax
	jmp		compar
incr:
	inc		rax
compar:
	cmp		BYTE [rdi + rax],0
	jne		incr
	ret