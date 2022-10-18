#include "main.h"
/**
 * times_table - computes and print out the 9 times table
 *
 * Return: returns void
 */
void times_table(void)
{
	int d;
	int f;

	for (f = 0 ; f < 10 ; f++)
	{
		_putchar('0');
		for (d = 1 ; d < 10 ; d++)
		{
			int prod = d * f;

			_putchar(',');
			if (prod / 100 == 0)
			{
				_putchar(32);
			}
			if (prod / 10 == 0)
			{
				_putchar(32);
			}
			else
			{
				_putchar('0' + (prod / 10));
			}
			if (prod % 10 == 0)
			{
				_putchar('0');
			}
			else
			{
				_putchar('0' + (prod % 10));
			}
		}
		_putchar('\n');
	}
}

