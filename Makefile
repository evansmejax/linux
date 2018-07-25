GPPPARAMS = -m32
ASPPARAMS = --32
LDPARAMS  = -melf_i386

objects = load.o kernel.o

%.o :	%.cpp -o $@ -c $<
		g++ $(GPPPARAMS)
	
%.o :	%.s -o $@ -c $<
		as $(ASPARAMS)
	
mykernel.bin:	linker.ld $(objects)
	ld(LDPARAMS) -T $< -o $@ $(objects)
	
install:	mykernel.bin
		sudo cp $< /boot/mykernel.bin
