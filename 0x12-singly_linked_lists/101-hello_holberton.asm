section .data
	message db 'Hello, Holberton',10
section .message
	global main
main:
	mov rax,1
	mov rdi, 1
	mov rsi,message
	mov rdx,17
	syscall

	mov rax,60
	xor rdi,0
	syscall
