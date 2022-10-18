#include "main.h"

/**
 * print_sign - prints +/- or 0 depending on the number
 * @j: test for  numbers
 *
 * Return: 1 for positive, 0 for zero and -1 for negative numbers
 */
int print_sign(int j)
{
	if (j > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (j < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}

