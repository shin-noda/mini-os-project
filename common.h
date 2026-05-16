#pragma once

// Basic Types
typedef int bool;
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;

// Memory & Address Types
typedef uint32_t size_t;
typedef uint32_t paddr_t; // Physical memory address
typedef uint32_t vaddr_t; // Virtual memory address

// Boolean Constants
#define true  1
#define false 0
#define NULL  ((void *) 0)

// Memory Alignment & Struct Macros (Clang Built-ins)
#define align_up(value, align)   __builtin_align_up(value, align)
#define is_aligned(value, align) __builtin_is_aligned(value, align)
#define offsetof(type, member)   __builtin_offsetof(type, member)

// Variadic Arguments Macros (For printf)
#define va_list  __builtin_va_list
#define va_start __builtin_va_start
#define va_end   __builtin_va_end
#define va_arg   __builtin_va_arg

// Standard Library Function Prototypes
void *memset(void *buf, char c, size_t n);
void *memcpy(void *dst, const void *src, size_t n);
char *strcpy(char *dst, const char *src);
int strcmp(const char *s1, const char *s2);
void printf(const char *fmt, ...);