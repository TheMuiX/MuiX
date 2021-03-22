	.file	"lab1.c"
	.text
	.section	.rodata
.LC0:
	.string	"Enter a ->"
.LC1:
	.string	"%f"
.LC2:
	.string	"Enter b ->"
.LC3:
	.string	"%f "
.LC4:
	.string	" Enter c ->"
.LC7:
	.string	" f (x) = "
.LC8:
	.string	"%f * x ^2"
.LC9:
	.string	"%f * x "
.LC11:
	.string	"% f "
	.align 8
.LC13:
	.string	"Function is even : f (x) = %f = f ( - x ) = %f \n"
	.align 8
.LC14:
	.string	"Function is odd : f ( - x ) = %f = -f ( x ) = %f \n "
	.align 8
.LC15:
	.string	"Function is neither even nor odd : f ( x ) = %f != f( - x ) = %f != -f ( x ) = %f \n "
.LC16:
	.string	" Vertex (% f , % f ) is a "
.LC17:
	.string	"minimum"
.LC18:
	.string	" maximum "
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	leaq	.LC0(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-24(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC1(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	leaq	.LC2(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-28(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC3(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	leaq	.LC4(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-32(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC3(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movss	-24(%rbp), %xmm0
	pxor	%xmm1, %xmm1
	ucomiss	%xmm1, %xmm0
	jp	.L2
	pxor	%xmm1, %xmm1
	ucomiss	%xmm1, %xmm0
	jne	.L2
	movss	-28(%rbp), %xmm0
	pxor	%xmm1, %xmm1
	ucomiss	%xmm1, %xmm0
	jp	.L2
	pxor	%xmm1, %xmm1
	ucomiss	%xmm1, %xmm0
	jne	.L2
	movss	-32(%rbp), %xmm0
	pxor	%xmm1, %xmm1
	ucomiss	%xmm1, %xmm0
	jp	.L2
	pxor	%xmm1, %xmm1
	ucomiss	%xmm1, %xmm0
	jne	.L2
	movl	$0, %eax
	jmp	.L28
.L2:
	movss	.LC6(%rip), %xmm0
	movss	%xmm0, -4(%rbp)
	leaq	.LC7(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movss	-24(%rbp), %xmm0
	pxor	%xmm1, %xmm1
	ucomiss	%xmm1, %xmm0
	jp	.L32
	pxor	%xmm1, %xmm1
	ucomiss	%xmm1, %xmm0
	je	.L7
.L32:
	movss	-24(%rbp), %xmm0
	cvtss2sd	%xmm0, %xmm0
	leaq	.LC8(%rip), %rdi
	movl	$1, %eax
	call	printf@PLT
	movss	-28(%rbp), %xmm0
	pxor	%xmm1, %xmm1
	comiss	%xmm1, %xmm0
	jbe	.L7
	movl	$43, %edi
	call	putchar@PLT
.L7:
	movss	-28(%rbp), %xmm0
	pxor	%xmm1, %xmm1
	ucomiss	%xmm1, %xmm0
	jp	.L34
	pxor	%xmm1, %xmm1
	ucomiss	%xmm1, %xmm0
	je	.L10
.L34:
	movss	-28(%rbp), %xmm0
	cvtss2sd	%xmm0, %xmm0
	leaq	.LC9(%rip), %rdi
	movl	$1, %eax
	call	printf@PLT
.L10:
	movss	-32(%rbp), %xmm0
	pxor	%xmm1, %xmm1
	ucomiss	%xmm1, %xmm0
	jp	.L35
	pxor	%xmm1, %xmm1
	ucomiss	%xmm1, %xmm0
	je	.L12
.L35:
	movss	-32(%rbp), %xmm0
	pxor	%xmm1, %xmm1
	comiss	%xmm1, %xmm0
	jbe	.L14
	movss	-24(%rbp), %xmm0
	pxor	%xmm1, %xmm1
	ucomiss	%xmm1, %xmm0
	jp	.L16
	pxor	%xmm1, %xmm1
	ucomiss	%xmm1, %xmm0
	jne	.L16
	movss	-28(%rbp), %xmm0
	pxor	%xmm1, %xmm1
	ucomiss	%xmm1, %xmm0
	jp	.L16
	pxor	%xmm1, %xmm1
	ucomiss	%xmm1, %xmm0
	je	.L41
.L16:
	movl	$43, %edi
	call	putchar@PLT
	jmp	.L14
.L41:
	movl	$45, %edi
	call	putchar@PLT
.L14:
	movss	-32(%rbp), %xmm0
	movss	.LC10(%rip), %xmm1
	andps	%xmm1, %xmm0
	cvtss2sd	%xmm0, %xmm0
	leaq	.LC11(%rip), %rdi
	movl	$1, %eax
	call	printf@PLT
.L12:
	movl	$10, %edi
	call	putchar@PLT
	movss	-24(%rbp), %xmm0
	mulss	-4(%rbp), %xmm0
	movaps	%xmm0, %xmm1
	mulss	-4(%rbp), %xmm1
	movss	-28(%rbp), %xmm0
	mulss	-4(%rbp), %xmm0
	addss	%xmm0, %xmm1
	movss	-32(%rbp), %xmm0
	addss	%xmm1, %xmm0
	movss	%xmm0, -8(%rbp)
	movss	-4(%rbp), %xmm0
	movss	.LC12(%rip), %xmm1
	xorps	%xmm0, %xmm1
	movss	-24(%rbp), %xmm0
	mulss	%xmm0, %xmm1
	movss	-4(%rbp), %xmm0
	movss	.LC12(%rip), %xmm2
	xorps	%xmm2, %xmm0
	mulss	%xmm0, %xmm1
	movss	-4(%rbp), %xmm0
	movss	.LC12(%rip), %xmm2
	xorps	%xmm0, %xmm2
	movss	-28(%rbp), %xmm0
	mulss	%xmm2, %xmm0
	addss	%xmm0, %xmm1
	movss	-32(%rbp), %xmm0
	addss	%xmm1, %xmm0
	movss	%xmm0, -12(%rbp)
	movss	-8(%rbp), %xmm0
	ucomiss	-12(%rbp), %xmm0
	jp	.L19
	movss	-8(%rbp), %xmm0
	ucomiss	-12(%rbp), %xmm0
	jne	.L19
	cvtss2sd	-12(%rbp), %xmm1
	cvtss2sd	-8(%rbp), %xmm0
	leaq	.LC13(%rip), %rdi
	movl	$2, %eax
	call	printf@PLT
	jmp	.L21
.L19:
	movss	-8(%rbp), %xmm0
	movss	.LC12(%rip), %xmm1
	xorps	%xmm1, %xmm0
	ucomiss	-12(%rbp), %xmm0
	jp	.L22
	ucomiss	-12(%rbp), %xmm0
	jne	.L22
	movss	-8(%rbp), %xmm0
	movss	.LC12(%rip), %xmm1
	xorps	%xmm1, %xmm0
	cvtss2sd	%xmm0, %xmm1
	cvtss2sd	-12(%rbp), %xmm0
	leaq	.LC14(%rip), %rdi
	movl	$2, %eax
	call	printf@PLT
	jmp	.L21
.L22:
	movss	-8(%rbp), %xmm0
	movss	.LC12(%rip), %xmm1
	xorps	%xmm1, %xmm0
	cvtss2sd	%xmm0, %xmm2
	cvtss2sd	-12(%rbp), %xmm1
	cvtss2sd	-8(%rbp), %xmm0
	leaq	.LC15(%rip), %rdi
	movl	$3, %eax
	call	printf@PLT
.L21:
	movss	-24(%rbp), %xmm0
	pxor	%xmm1, %xmm1
	ucomiss	%xmm1, %xmm0
	jp	.L39
	pxor	%xmm1, %xmm1
	ucomiss	%xmm1, %xmm0
	je	.L24
.L39:
	movss	-28(%rbp), %xmm0
	movss	.LC12(%rip), %xmm1
	xorps	%xmm0, %xmm1
	movss	-24(%rbp), %xmm0
	addss	%xmm0, %xmm0
	divss	%xmm0, %xmm1
	movaps	%xmm1, %xmm0
	movss	%xmm0, -16(%rbp)
	movss	-24(%rbp), %xmm0
	mulss	-16(%rbp), %xmm0
	movaps	%xmm0, %xmm1
	mulss	-16(%rbp), %xmm1
	movss	-28(%rbp), %xmm0
	mulss	-16(%rbp), %xmm0
	addss	%xmm0, %xmm1
	movss	-32(%rbp), %xmm0
	addss	%xmm1, %xmm0
	movss	%xmm0, -20(%rbp)
	cvtss2sd	-20(%rbp), %xmm1
	cvtss2sd	-16(%rbp), %xmm0
	leaq	.LC16(%rip), %rdi
	movl	$2, %eax
	call	printf@PLT
	movss	-24(%rbp), %xmm0
	pxor	%xmm1, %xmm1
	comiss	%xmm1, %xmm0
	jbe	.L42
	leaq	.LC17(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	jmp	.L24
.L42:
	leaq	.LC18(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
.L24:
	movl	$0, %eax
.L28:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.section	.rodata
	.align 4
.LC6:
	.long	1065353216
	.align 16
.LC10:
	.long	2147483647
	.long	0
	.long	0
	.long	0
	.align 16
.LC12:
	.long	2147483648
	.long	0
	.long	0
	.long	0
	.ident	"GCC: (Debian 8.3.0-6) 8.3.0"
	.section	.note.GNU-stack,"",@progbits
