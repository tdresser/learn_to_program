	.text
	.def	 @feat.00;
	.scl	3;
	.type	0;
	.endef
	.globl	@feat.00
@feat.00 = 1
	.def	 _main;
	.scl	2;
	.type	32;
	.endef
	.globl	_main
	.align	16, 0x90
_main:                                  # @main
# BB#0:
	pushl	%ebp
	movl	%esp, %ebp
	pushl	%eax
	calll	___main
	movl	$42, %eax
	movl	$0, -4(%ebp)
	addl	$4, %esp
	popl	%ebp
	retl


