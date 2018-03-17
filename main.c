#include <stdlib.h>
#include <stdio.h>
#define FUSE_USE_VERSION 29
#include <fuse/fuse.h>

int main(int argc, char * argv[]) {
	if(argc != 2) {
		printf("Usage: fuse_unmount MOUNTPOINT\n");
		exit(1);
	}
	fuse_unmount(argv[1], NULL);
}
