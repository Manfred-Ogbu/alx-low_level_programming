#include "main.h"
#include <stdio.h>

/**
 * print_array - prints an array a number of times.
 * @a: an array.
 * @n: the number of elements to print.
 *
 */
void print_array(int *a, int n)
{
	int count;

	for (count = 0 ; count < n ; count++)
	{
		printf("%d", *(a + count));
		if (count < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}

