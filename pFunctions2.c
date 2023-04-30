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
