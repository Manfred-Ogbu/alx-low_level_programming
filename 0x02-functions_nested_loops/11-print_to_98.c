#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - count natural numbers from k to 98
 * @k: starting value to count from
 *
 */
void print_to_98(int k)
{
	int j;

	if (k == 98)
	{
		printf("98");
	}
	else if (k < 98)
	{
		for (j = k ; j <= 98 ; j++)
		{
			printf("%d", j++);
			if (j < 98)
			{
				printf(", ");
			}
		}
	}
	else if (k > 98)
	{
		for (j = k ; j >= 98 ; j--)
		{
			printf("%d", j);
			if (j > 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}

