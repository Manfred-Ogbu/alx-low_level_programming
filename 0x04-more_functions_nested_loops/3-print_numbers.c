#include "main.h"

/**
 * print_numbers - prints num 0-9.
 *
 */
void print_numbers(void)
{
	int number = 0;

	while (number < 10)
	{
		_putchar('0' + number);
		number++;
	}
	_putchar('\n');
}

