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
	char n, *a;
	/*int *b = malloc(sizeof(int *));*/

	va_start(lst, fmt);
	
	if (!(fmt && *fmt))
		return (-1);
	while (*fmt != '\0')
	{
		if (*fmt != '%')
		{
			fwrite(fmt, 1, 1, stdout);
		} else
		{
			fmt++;
			i++;
			if (*fmt == '%')
				fwrite(fmt, 1, 1, stdout);
			else if (*fmt == 'c')
			{
				n = va_arg(lst, int);
				fwrite(&n, 1, 1, stdout);
			}
			else if (*fmt == 's')
			{
				a = va_arg(lst, char *);
				fwrite(a, strlen(a), 1, stdout);
			}
		}
		fmt++;
		i++;
	}
	va_end(lst);
	/*vprintf((fmt - i), lst);*/
	return (i);
}
