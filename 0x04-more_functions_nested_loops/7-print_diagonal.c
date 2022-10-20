#include "main.h"

/**
 * print_diagonal - print a diagonal line to a given lenth.
 * @n: length to print to.
 */
void print_diagonal(int n)
{
	int k, i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0 ; i < n ; i++)
	{
		k = i;
		while (k > 0)
		{
			_putchar(32);
			k--;
		}
		_putchar('\\');
		_putchar('\n');
	}
}

