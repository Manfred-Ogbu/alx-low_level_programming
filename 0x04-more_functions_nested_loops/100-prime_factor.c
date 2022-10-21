#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (sucess)
 */
int main(void)
{
	unsigned long int number = 612852475143;
	unsigned long int prim_num;

	prim_num = 3;
	while (prim_num < number / 2)
	{
		if ((number % prim_num) == 0)
		{
			if ((prim_num % 3) == 2)
				printf(",%lu ", prim_num);
		}

		prim_num += 2;
	}

	putchar('\n');
	return (0);
}

