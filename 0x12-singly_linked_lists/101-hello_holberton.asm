; the text section
section .text:
	global _start

_start:
	mov edx, msg_len
	mov ecx, msg
	mov ebx, 1	;stdout
	mov eax, 4	;system call (sys_wriet)

	mov eax, 1	;system call (sys_exit)

section .data:		; this section for declaring data and constant
	msg: db "Hello, Holberton", 0xA
	msg_len equ $-msg
