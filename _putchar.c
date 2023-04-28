#include <unistd.h>
/**
 * _putchar - Writes to stdout
 * @a: a character
 * Return: integer
 */
int _putchar(char a)
{
	return (write(1, &a, 1));
}
