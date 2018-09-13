# SSSK
*Stupid, Shitty, and Small Kernel*

## How to build

1. Run the `nasm` assembler on `kernel.asm`

```
nasm -f elf32 kernel.asm -o kernel_asm.o
```

2. Compile with `gcc`

```
gcc -m32 -c kernel.c -o kernel_c.o
```

3. Link it all together

```
ld -m elf_i386 -T link.ld -o sssk kernel_asm.o kernel_c.o
```

## Current Progress

### Implemented

* Print onto the screen

### To Do

* Keyboard support
* grub support (add a file on how to add this kernel to grub)
