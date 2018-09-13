CC = gcc
ASM = nasm
LD = ld
CFLAGS = -m32 -c
ASMFLAGS = -f elf
LDFLAGS = -m elf -T

assemble: kernel.asm
	$(ASM) $(ASMFLAGS) kernel.asm -o kernel_asm.o

ccompile: kernel.c
	$(CC) $(CFLAGS) kernel.c -o kernel_c.o

linker: link.ld kernel_asm.o kernel_c.o
	$(LD) $(LDFLAGS) link.ld -o sssk kernel_asm.o kernel_c.o

clean:
	rm -rf kernel_asm.o kernel_c.o sssk
