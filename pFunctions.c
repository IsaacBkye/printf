#include "main.h"
/**
 * printc - Prints characters
 * @lst: va_list
 */
void printc(va_list *lst)
{
	char a = (char)va_arg(*lst, int);

	_putchar(a);
}
/**
 * printd - Prints decimal
 * @lst: va_list
 */
void printd(va_list *lst)
{
	long int d = (int)va_arg(*lst, int);
	long int i = 10, j = 0, k;
	
	if (d < 0)
	{
		_putchar('-');
		d = -d;
	}
	while (d / i > 0)
	{
		j++;
		i = i * 10;
	}
	if (j != 0)
	{
		while (j > 0)
		{
			k = d / (10 ^ j);
			k = k % 10;
			k == 0 ? _putchar('0') : _putchar('0' + k);
			j--;
		}
	}
	k = (d % 10);
	k == 0 ? _putchar('0') : _putchar('0' + k);
}
/**
 * prints - Prints string
 * @lst: va_list
 */
void prints(va_list *lst)
{
	char *a = va_arg(*lst, char *);
	
	while (*a != '\0')
	{
		_putchar(*a);
		a++;
	}
}
/**
 * printi - Prints float
 * @lst: va_list
 */
void printi(va_list *lst)
{
	long int F = (int)va_arg(*lst, int);
	long int i = 10, j = 0;
	long int k, l = 10;

	if (F < 0)
	{
		_putchar('-');
		F = -F;
	}
	while (F / i > 0)
	{
		j++;
		i = i * 10;
	}
	if (j != 0)
	{
		while (j > 0)
		{
			k = F / (10 ^ j);
			k = k % l;
			k == 0 ? _putchar('0') : _putchar('0' + k);
			j--;
		}
	}
	k = (F % l);
	k == 0 ? _putchar('0') : _putchar('0' + k);
}
/**
 * printper - Prints %
 * @lst: va_list
 */
void printper(__attribute__ ((unused)) va_list *lst)
{
	_putchar('%');
}
