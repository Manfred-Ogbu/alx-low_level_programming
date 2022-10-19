#include "main.h"

/**
 * print_times_table - print the times table from n to 15
 * @n: value used to compute the times table
 *
 * Return: void
 */
void print_times_table(int n)
{
	int d, k;

	if (n > 15)
	{
		return;
	}
	for (k = 0 ; k < n + 1 ; k++)
	{
		_putchar('0');
		for (d = 1 ; d < n + 1 ; d++)
		{
			int prod = d * k;

			_putchar(',');
			_putchar(prod);
		}
		_putchar('\n');
	}
}

