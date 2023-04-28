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
		{'c', printc}, {'d', printd}, {'i', printd},
		{'e', NULL}, {'E', NULL}, {'f', printff},
		{'g', NULL}, {'G', NULL}, {'o', NULL},
		{'s', prints}, {'u', NULL}, {'x', NULL},
		{'X', NULL}, {'p', NULL}, {'n', NULL},
		{'%', printper}, {'\0', NULL}
	};
	va_start(lst, fmt);
	if (!(fmt && *fmt))
		return (-1);
	while (*fmt != '\0')
	{
		if (*fmt != '%')
		{
			_putchar(*fmt);

		} else
		{
			fmt++;
			i++;
			while (writer[w].c != '\0')
			{
				if (*fmt == writer[w].c)
					writer->func(lst);
				w++;
			}
		}
		fmt++;
		i++;
	}
	va_end(lst);
	return (i);
}
