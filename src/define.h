#ifndef __DEFINE_H__
#define __DEFINE_H__

#define PRODUCT_RELEASE				0

#if (PRODUCT_RELEASE == 1)
	#define DBG_PRINTF				0
	#define LOG_PRINTF				1
#else
	#define DBG_PRINTF				1
	#define LOG_PRINTF				1
#endif


typedef unsigned char  u8;
typedef unsigned short u16;
typedef unsigned int   u32;

#if (DBG_PRINTF == 1)
	#define dbg_printf(fmt, args...)	printf(fmt, ##args)
#else
	#define dbg_printf(fmt, args...)	do { } while(0)
#endif

#if (LOG_PRINTF == 1)
	#define log_printf(fmt, args...)	printf(fmt, ##args)
#else
	#define log_printf(fmt, args...)	do { } while(0)
#endif

#endif
