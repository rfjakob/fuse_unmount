
fuse_unmount: main.c
	gcc -D_FILE_OFFSET_BITS=64 -lfuse -o fuse_unmount main.c
