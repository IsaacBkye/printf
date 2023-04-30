#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <stdarg.h>
#include <string.h>
#include <limits.h>
/**
 * struct idxFunc - Identify format and run function
 *
 * @c: format identifier
 * @func: corresponding function to run
 *
 * Description: For printf project
 */
typedef struct idxFunc
{
	char c;
	int (*func)(va_list *);
} idxFunc;

int expo(int a, int b);
int _printf(const char *fmt, ...);
int _putchar(char a);
int printi(va_list *lst);
int prints(va_list *lst);
int printper(va_list *lst);
int printd(va_list *lst);
int printb(va_list *lst);
int printc(va_list *lst);
int printx(va_list *lst);
int printu(va_list *lst);
int printo(va_list *lst);
int printHex(va_list *lst);
int printhex(va_list *lst);
int printr(va_list *lst);
#endif
