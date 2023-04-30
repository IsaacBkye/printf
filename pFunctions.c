#include "main.h"
/**
 * printc - Prints characters
 * @lst: va_list
 * Return: 1 on success
 */
int printc(va_list *lst)
{
	char a = (char)va_arg(*lst, int);

	_putchar(a);
	return (1);
}
/**
 * printd - Prints decimal
 * @lst: va_list
 * Return: 1 on success
 */
int printd(va_list *lst)
{
	long int d = (int)va_arg(*lst, int);
	long int i = 10, j = 0, k;
	int a = 0, b, c;

	if (d < 0)
	{
		_putchar('-');
		a += 1;
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
			c = expo(10, j);
			b = d / c;
			k = b % 10;
			k == 0 ? _putchar('0') : _putchar('0' + k);
			a += 1;
			j--;
		}
	}
	k = (d % 10);
	k == 0 ? _putchar('0') : _putchar('0' + k);
	a += 1;
	return (a);
}
/**
 * prints - Prints string
 * @lst: va_list
 * Return: 1 on success
 */
int prints(va_list *lst)
{
	char *a = va_arg(*lst, char *);
	int i = 0;

	while (*a != '\0')
	{
		_putchar(*a);
		i += 1;
		a++;
	}
	return (i);
}
/**
 * printi - Prints float
 * @lst: va_list
 * Return: 1 on success
 */
int printi(va_list *lst)
{
	long int F = (int)va_arg(*lst, int);
	long int i = 10, j = 0;
	long int k, l = 10;
	int b = 0, a, c;

	if (F < 0)
	{
		_putchar('-');
		b += 1;
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
			c = expo(10, j);
			a = F / c;
			k = a % l;
			k == 0 ? _putchar('0') : _putchar('0' + k);
			b += 1;
			j--;
		}
	}
	k = (F % l);
	k == 0 ? _putchar('0') : _putchar('0' + k);
	b += 1;
	return (b);
}
/**
 * printper - Prints %
 * @lst: va_list
 * Return: 1 on success
 */
int printper(__attribute__ ((unused)) va_list *lst)
{
	_putchar('%');
	return (1);
}
