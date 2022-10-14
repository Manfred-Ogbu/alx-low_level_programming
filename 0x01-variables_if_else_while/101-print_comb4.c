#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int x;
	int y;
	int z;

	for (z = 0 ; z != 8 ; z++)
	{
		for (x = z + 1 ; x != 9 ; x++)
		{
			y = x + 1;
			do {
				putchar('0' + z);
				putchar('0' + x);
				putchar('0' + y);
				if (z != 7)
				{
					putchar(',');
					putchar(32);
				}
				y++;
			} while (y != 10);
		}
	}
	putchar('\n');
	return (0);

}

