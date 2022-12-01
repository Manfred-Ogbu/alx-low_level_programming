#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - fxn that convert a binary number to an unsigned int
 * @b: string to convert.
 *
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num, w;

	if (!b || !*b)
		return (0);

	num = w = 0;
	while (b[w])
	{
		if (b[w] > 49)
			return (0);
		else if (b[w] == 49)
		{
			num <<= 1;
			num += 1;
		}
		else
			num <<= 1;
		w++;
	}
	return (num);
}

