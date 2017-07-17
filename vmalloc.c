#include <stdio.h>
#include "vmalloc.h"
#define NO_STD_LIB  TRUE
#define MEMPOOL_SIZE    1024*1024
#if defined  NO_STD_LIB || (NO_STD_LIB == TRUE)
void init_mempool(void)
{
	#if defined __DEBUG__ || (__DEBUG__ == TRUE)
	#if defined (NO_STD_LIB) || (NO_STD_LIB == TRUE)
	printf("MEMPOOLSIZE:%d B == %d KB\n",MEMPOOL_SIZE,MEMPOOL_SIZE/1024);
	#endif
	#endif
}
#endif
