#include <stdio.h>

/**
 * main - Entry point
 *
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	char k;

	for (k = 'a' ; k <= 'z' ; k++)
	{
		if ((k == 'q' || k == 'e') != 1)
		{
			putchar(k);
		}
	}
	putchar('\n');
	return (0);
}

