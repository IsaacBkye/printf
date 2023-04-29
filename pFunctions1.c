#include "main.h"
/**
 * printo - Prints unsigned int
 * @lst: va_list
 */
void printo(va_list lst)
{
	unsigned int u = va_arg(lst, unsigned int);
        int i = 8, j = 0;
        unsigned int k;

        while (u / i > 0)
        {
                j++;
                i = i * 8;
        }
        while (j > 0)
        {
                k = u / (8 ^ j);
                k = k % 8;
                k == 0 ? _putchar('0') : _putchar('0' + k);
                j--;
        }
        k = (u % 8);
        k == 0 ? _putchar('0') : _putchar('0' + k);
}
/**
 * printu - Prints unsigned int
 * @lst: va_list
 */
void printu(va_list lst)
{
	unsigned int u = va_arg(lst, unsigned int);
	int i = 10, j = 0;
	unsigned int k;
	
	while (u / i > 0)
	{
		j++;
		i = i * 10;
	}
	while (j > 0)
	{
		k = u / (10 ^ j);
		k = k % 10;
		k == 0 ? _putchar('0') : _putchar('0' + k);
		j--;
	}
	k = (u % 10);
	k == 0 ? _putchar('0') : _putchar('0' + k);
}
/**
 * printx- Prints string
 * @lst: va_list
 */
void printx(va_list lst)
{
	char a = va_arg(lst, int);
	
	_putchar(a + 0);
}
/**
 * printHex - Prints hex
 * @lst: va_list
 */
void printHex(va_list lst)
{
	unsigned int H = va_arg(lst, unsigned int);
	int i = 16, j = 0;
	unsigned int k = 0;

	while (H / i > 0)
	{
		j++;
		i = i * 16;
	}
	while (j > 0)
	{
		k = H / (16 ^ j);
		k = k % 16;
		k == 0 ? _putchar('0') : k < 10 ? _putchar(k + 48) :
			_putchar(55 + k);
		j--;
	}
	k = ((int)H% 16);
	k == 0 ? _putchar('0') : k < 10 ? _putchar(k + 48) :
                        _putchar(55 + k);
}
/**
 * printhex - Prints %
 * @lst: va_list
 */
void printhex(va_list lst)
{
	unsigned int h = va_arg(lst, unsigned int);
	int i = 16, j = 0;
	unsigned int k = 0;
	while (h / i > 0)
	{
		j++;
		i = i * 16;
	}
	while (j > 0)
	{
		k = h / (16 ^ j);
		k = k % 16;
		k == 0 ? _putchar('0') : k < 10 ? _putchar(k + 48) :
			_putchar(87 + k);
		j--;
	}
	k = (h % 16);
	k == 0 ? _putchar('0') : k < 10 ? _putchar(k + 48) :
		_putchar(87 + k);
}
