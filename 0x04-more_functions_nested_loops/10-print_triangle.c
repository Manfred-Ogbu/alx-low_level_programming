#include "main.h"

/**
 * print_triangle - print a triangle.
 * @size : size of triangle to print.
 *
 *
 */
void print_triangle(int size)
{
	/*
	 * int z: set counter.
	 *
	 * int margin: This will
	 * int g: is used to offset size.
	 * int to_print: is used to tell how many '#' character
	 */
	int z, margin, g, to_print;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	g = size - 1;
	for (z = 0 ; z < size ; z++)
	{
		/*
		* set the margin to Zero every loop.
		* the right amount of white space.
		*/
		margin = 0;
		while (margin < (g - z))
		{
			_putchar(32);
			margin++;
		}
		to_print = size - margin;
		while (to_print > 0)
		{
			_putchar('#');
			to_print--;
		}
		_putchar('\n');
	}
}

