section .data
	mess db 'Hello, Holberton',10
section .mess
	global main
main:
	mov rax,1
	mov rdi, 1
	mov rsi,mess
	mov rdx,17
	syscall

	mov rax,60
	xor rdi,0
	syscall
