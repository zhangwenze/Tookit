#include <stdio.h>
#include "vmalloc.h"
#include "string.h"

int main(int argc, char ** args)
{
	if(strcmp(args[1],"--help")){
		printf("Mini-Tookit  Usage:\n");
		printf("-v\t--vmalloc\t test vmalloc");
	}
	init_mempool();	
}

