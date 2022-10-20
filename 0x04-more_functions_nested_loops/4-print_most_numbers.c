#include "main.h"

/**
 * print_most_numbers - prints 0-9 excluding 2 & 4.
 *
 */
void print_most_numbers(void)
{
	int number = 0;

	while (number < 10)
	{
		if (number != 2 && number != 4)
		{
			_putchar('0' + number);
		}
		number++;
	}
	_putchar('\n');
}

