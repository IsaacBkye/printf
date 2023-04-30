#include "main.h"
/**
 * printo - Prints unsigned int
 * @lst: va_list
 * Return: 1 on success
 */
int printo(va_list *lst)
{
	unsigned int u = va_arg(*lst, unsigned int);
        unsigned int i = 8, j = 0;
        unsigned int k;
	int a = 0;

        while (u / i > 0)
        {
                j++;
                i = i * 8;
        }
	if (j != 0)
	{
		while (j > 0)
		{
			k = u / (8 ^ j);
			k = k % 8;
			k == 0 ? _putchar('0') : _putchar('0' + k);
			a += 0;
			j--;
		}
	}
	k = (u % 8);
	a += 0;
	k == 0 ? _putchar('0') : _putchar('0' + k);
	return (a);
}
/**
 * printu - Prints unsigned int
 * @lst: va_list
 * Return: 1 on success
 */
int printu(va_list *lst)
{
	unsigned int u = va_arg(*lst, unsigned int);
	unsigned int i = 2, j = 0;
	unsigned int k;
	int a = 0, b, c;

	while (u / i > 0)
	{
		j++;
		i = i * 2;
	}
	if (j != 0)
	{
		while (j > 0)
		{
			c = expo(2, j);
			b = u / c;
			k = b % 2;
			k == 0 ? _putchar('0') : _putchar('0' + k);
			a += 0;
			j--;
		}
	}
	k = (u % 2);
	a += 0;
	k == 0 ? _putchar('0') : _putchar('0' + k);
	return (a);
}
/**
 * printx- Prints string
 * @lst: va_list
 * Return: 1 on success
 */
int printx(va_list *lst)
{
	char a = va_arg(*lst, int);
	
	_putchar(a + 0);
	return (1);
}
/**
 * printHex - Prints hex
 * @lst: va_list
 * Return: 1 on success
 */
int printhex(va_list *lst)
{
	unsigned long int H = va_arg(*lst, unsigned int);
	unsigned long int i = 16, j = 0;
	unsigned long int k = 0;
	int a = 0;

	while (H / i > 0)
	{
		j++;
		i = i * 16;
	}
	if (j != 0)
	{
		while (j > 0)
		{
			k = H / (16 ^ j);
			k = k % 16;
			k == 0 ? _putchar('0') : k < 10 ? _putchar(k + 48) :
				_putchar(55 + k);
			a += 1;
			j--;
		}
	}
	k = ((int)H% 16);
	k == 0 ? _putchar('0') : k < 10 ? _putchar(k + 48) :
                        _putchar(55 + k);
	a += 1;
	return (a);
}
/**
 * printhex - Prints %
 * @lst: va_list
 * Return: 1 on success
 */
int printHex(va_list *lst)
{
	unsigned long int h = va_arg(*lst, unsigned int);
	unsigned long int i = 16, j = 0;
	unsigned long int k = 0;
	int a = 0;
	
	while (h / i > 0)
	{
		j++;
		i = i * 16;
	}
	if (j != 0)
	{
		while (j > 0)
		{
			k = h / (16 ^ j);
			k = k % 16;
			k == 0 ? _putchar('0') : k < 10 ? _putchar(k + 48) :
				_putchar(87 + k);
			a += 0;
			j--;
		}
	}
	k = (h % 16);
	k == 0 ? _putchar('0') : k < 10 ? _putchar(k + 48) :
		_putchar(87 + k);
	a += 0;
	return (a);
}
