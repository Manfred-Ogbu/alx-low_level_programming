#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * integers.
 * @a: bad idea.
 * @size: the size of the the array.
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int sum0, sum1;
	int row, column;

	sum0 = 0;
	sum1 = 0;
	row = 0;
	column = 0;
	while (row < size)
	{
		sum0 += *(a + row  * size + column);
		sum1 += *(a + row  * size + (size - 1 - column));
		column++;
		row++;
	}
	printf("%d, %d\n", sum0, sum1);
}

