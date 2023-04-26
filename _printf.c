#include "main.h"
/**
 * intHdle - Handling int and decimal prints
 * @arg: arg
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
	char a, *b;
	int i = 0;

	va_start(lst, fmt);
	if (!(fmt && *fmt))
		return (-1);
	while (fmt != NULL)
	{
		if (*fmt != '%')
		{
			i++;
			write(1, fmt, 1);
			fmt++;
		} else
		{
			fmt = fmt + 1;
			if (*fmt == 'c')
			{
				a = va_arg(lst, int);
				write(1, &a, 1);
			} else if (*fmt == 's')
			{
				b = va_arg(lst, char *);
				write(1, &b, strlen(b));
			} else if (*fmt == '%')
			{
				a = '%';
				write(1, &a, 1);
			} else if (*fmt == 'd')
			{
				intHdle(va_arg(lst, int));
			}
			i = i + 2;
		}
	}
	return (i);
}
