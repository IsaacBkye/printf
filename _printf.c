#include "main.h"
/**
 * _printf - Imitates printf
 * @fmt: arg to be passed
 * Return: Length of that printed out
 */
int _printf(const char *fmt, ...)
{
	va_list lst;
	int w = 0, i = 0;

	idxFunc writer[] = {
		{'c', printc}, {'d', printd}, {'i', printi},
		{'x', printHex}, {'X', printhex}, /*{'o', printo},*/
		{'s', prints}, {'b', printu},
		{'p', printHex}, {'%', printper}, {'*', printx},
		{'\0', NULL}
	};
	va_start(lst, fmt);
	if (!(fmt && *fmt))
		return (-1);
	while (*fmt != '\0')
	{
		if (*fmt != '%')
		{
			i += _putchar(*fmt);

		} else
		{
			fmt++;
			while (writer[w].c != '\0')
			{
				if (*fmt == writer[w].c)
				{
					i += writer[w].func(&lst);
					break;
				}
				w++;
			}
		}
		fmt++;
	}
	va_end(lst);
	return (i);
}
