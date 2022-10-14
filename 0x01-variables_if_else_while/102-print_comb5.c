#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int n;
	int o;
	int p;
	int q;

	for (n = 0 ; n < 10 ; n++)
	{
		for (o = 0 ; o <= 10 ; o++)
		{
			for (p = 0 ; p < 10 ; p++)
			{
				for (q = 0 ; q < 10 ; q++)
				{
					putchar('0' + n);
					putchar('0' + o);
					putchar(32);
					putchar('0' + p);
					putchar('0' + q);
					if (!(n == 9 && o == 8))
					{
						putchar(',');
						putchar(32);
					}
					q++;
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
