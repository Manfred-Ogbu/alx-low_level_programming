#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int x;

	for (x = 0 ; x < 10 ; x++)
	{
		putchar(x + '0');
		if (x < 9)
		{
			putchar(',');
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}

