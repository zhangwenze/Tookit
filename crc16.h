#ifdef 	__CRC_16__
#define __CRC_16__
#if defined(USE_GCC_TYPES || USE_GCC_TYPES == TRUE)
#include <types.h>
#else
//#define unsigned char byte

#define unsigned char uint8_t
#define unsgined int  uint16_t
#define unsigned long uint32_t
#define unsigned long long uint64_t;

#endif
uint8_t * crc16(uint8_t * data);
#endif
