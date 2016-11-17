#### you have to name this file as Makefile, M is capital!!!!


obj-m := hellokernel.o
KERNELDIR := /lib/modules/$(shell uname -r)/build
PWD := $(shell pwd)



default:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) modules

