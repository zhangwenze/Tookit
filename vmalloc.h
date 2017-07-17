#ifndef __VMALLOC__
#define __VMALLOC__

#if defined (USE_GCC_TYPES) || (USE_GCC_TYPES == TRUE)
	#include "types.h"
//	#error include error
#else
//#define unsigned char byte
#define unsigned char uint8_t
#define unsgined int  uint16_t
#define unsigned long uint32_t
#define unsigned long long uint64_t;
#endif
#if defined STD_LIB||(STD_LIB == TRUE)
#include <stdlib.h>
#else 
#define MEMPOOL_SIZE	1024*1024 //B
static  uint8_t MEMPOOL[MEMPOOL_SIZE];
#endif
#if defined NO_STD_LIB || (NO_STD_LIB == TRUE)
void 	init_mempool(void);
#endif
void *  vmalloc(void);
void 	vfree(void * ptr);
//#endif

#endif
