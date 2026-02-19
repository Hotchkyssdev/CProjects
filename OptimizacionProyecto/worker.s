	.file	"worker.c"
	.text
	.section .rdata,"dr"
.LC0:
	.ascii "Flag detectado!\0"
	.text
	.p2align 4
	.globl	wait_for_flag
	.def	wait_for_flag;	.scl	2;	.type	32;	.endef
	.seh_proc	wait_for_flag
wait_for_flag:
	.seh_endprologue
	.p2align 4
	.p2align 4
	.p2align 3
.L2:
	movl	ready_flag(%rip), %eax
	testl	%eax, %eax
	je	.L2
	leaq	.LC0(%rip), %rcx
	jmp	puts
	.seh_endproc
	.p2align 4
	.globl	trigger_flag
	.def	trigger_flag;	.scl	2;	.type	32;	.endef
	.seh_proc	trigger_flag
trigger_flag:
	.seh_endprologue
	movl	$1, ready_flag(%rip)
	ret
	.seh_endproc
	.globl	ready_flag
	.bss
	.align 4
ready_flag:
	.space 4
	.ident	"GCC: (Rev8, Built by MSYS2 project) 15.2.0"
	.def	puts;	.scl	2;	.type	32;	.endef
