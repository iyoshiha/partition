#ifndef DEBUG_H
#define DEBUG_H
#ifdef DEBUG
#define PT(str) puts(str)
#define PF(fmt, ...) printf(fmt, __VA_ARGS__);
#else
#define PT(str)
#define PF(fmt, ...) 
#endif
#endif
