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
	void (*func)(va_list *);
} idxFunc;
int _putchar(char a);
void printi(va_list *lst);
void prints(va_list *lst);
void printper(va_list *lst);
void printd(va_list *lst);
void printc(va_list *lst);
void printx(va_list *lst);
void printu(va_list *lst);
void printo(va_list *lst);
void printHex(va_list *lst);
void printhex(va_list *lst);
#endif
