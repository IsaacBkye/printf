#include "main.h"
/**
 * intHdle - Handling int and decimal prints
 * @arg: arg
 *
 */
void intHdle(int x)
{
	int i = 10;
	int j = 0;
	int a = 0;

	while (x / i > 0)
	{
		j++;
		i = i * 10;
	}
	j--;
	while (j > 0)
	{
		a = (x) / (i * j);
		putchar('0' + a);
		j--;
	}
	a = (x % 10);
	putchar('0' + a);
}
/**
 * _printf - Imitates printf
 * @fmt: arg to be passed
 * Return: Length of that printed out
 */
int _printf(const char *fmt, ...)
{
	va_list lst;
	int i = 0;

	va_start(lst, fmt);
	
	if (!(fmt && *fmt))
		return (-1);
	while (*fmt != '\0')
	{
		fmt++;
		i++;
	}
	vprintf((fmt - i), lst);
	return (i);
}
