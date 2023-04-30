#include "main.h"
/**
 * expo - Returns exponent
 * @a: arg
 * @b: arg1
 * Return: result
 */
int expo(int a, int b)
{
	int r = 1;

	while (b > 0)
	{
		r *= a;
		b--;
	}
	return (r);
}
int printb(va_list *lst)
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
	k = (u % 8);
	a += 0;
	k == 0 ? _putchar('0') : _putchar('0' + k);
	return (a);
}
