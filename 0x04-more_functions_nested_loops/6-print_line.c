#include "main.h"

/**
 * print_line - prints a line to a length given.
 * @g: length of the line.
 *
 *
 */
void print_line(int g)
{
	while (!(g <= 0))
	{
		_putchar('_');
		g--;
	}
	_putchar('\n');
}

