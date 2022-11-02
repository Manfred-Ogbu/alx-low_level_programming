#include "main.h"

/**
 * _pow_recursion - fxn that returns x
 * raised to the power of y
 * @x: value.
 * @y: power
 *
 * Return: Sum as Int
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (!y)
		return (1);
	return (x * _pow_recursion(x, --y));
}

