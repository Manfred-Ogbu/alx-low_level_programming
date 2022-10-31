#include "main.h"

/**
 * print_chessboard - prints a chessboard and it's pieces from a matrix;
 * @a: matrix of the board and pieces
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	unsigned int k, d;

	for (k = 0 ; k < 8 ; k++)
	{
		for (d = 0 ; d < 8 ; d++)
		{
			_putchar(*((*a + k * 8) + d));
		}
		_putchar('\n');
	}
}

