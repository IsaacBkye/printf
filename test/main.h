#ifndef MAIN_H
#define MAIN_H
/**
 * Declarations
 */
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <stdarg.h>
#include <string.h>
int _printf(const char *fmt, ...);
void intHdle(int x);
/**
 * idxFunc - Identify format n run function
 * @c: format
 * @func: function
 */
typedef struct idxFunc
{
	char c;
	void (*func)();
} idxFunc;
int _putchar(char a);
void printff(va_list lst);
void prints(va_list lst);
void printd(va_list lst);
void printc(va_list lst);
void printper(va_list lst);

#endif
