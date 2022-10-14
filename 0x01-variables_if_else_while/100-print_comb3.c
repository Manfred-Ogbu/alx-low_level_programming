#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int k;
	int j;

	for (k = 0 ; k < 9 ; k++)
	{
		j = k + 1;
		do {
			putchar('0' + k);
			putchar('0' + j);
			if (k < 8)
			{
				putchar(',');
				putchar(32);
			}
			j++;
		} while (j < 10);
	}
	putchar('\n');
	return (0);
}

