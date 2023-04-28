#include "main.h"
/**
 * printc - Prints characters
 * @lst: va_list
 */
void printc(va_list lst)
{
	char a = (char)va_arg(lst, int);
	
	_putchar(a);
}
/**
 * printd - Prints decimal
 * @lst: va_list
 */
void printd(va_list lst)
{
	int d = (int)va_arg(lst, int);
	int i = 10, j = 0, k = 0;
	
	while (d / i > 0)
	{
		j++;
		i = i * 10;
	}
	while (j > 0)
	{
		k = d / (10 * j);
		_putchar('0' + k);
		j--;
	}
	k = (d % 10);
	_putchar('0' + k);
}
/**
 * prints - Prints string
 * @lst: va_list
 */
void prints(va_list lst)
{
	char *a = va_arg(lst, char *);
	
	while (*a != '\0')
	{
		_putchar(*a);
		a++;
	}
}
/**
 * printff - Prints float
 * @lst: va_list
 */
void printff(va_list lst)
{
	double F = (double)va_arg(lst, double);
	int f = int(F);


}
/**
 * printper - Prints %
 * @lst: va_list
 */
void printper(va_list lst)
{
	char a = '%';

	_putchar(a);
}
