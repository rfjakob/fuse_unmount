FLAGS=$(shell pkg-config --cflags fuse --libs fuse)

fuse_unmount: main.c Makefile
	gcc $(FLAGS) -o fuse_unmount main.c
