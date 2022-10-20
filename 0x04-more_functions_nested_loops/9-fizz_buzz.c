#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0 (sucess)
 */
int main(void)
{
	int f;

	f = 0;
	while (f < 100)
	{
		f++;
		if ((f % 3) != 0 && (f % 5) != 0)
		{
			printf("%d", f);
		}
		else if ((f % 3)  == 0 && (f % 5) != 0)
		{
			printf("Fizz");
		}
		else if ((f % 3) != 0 && (f % 5) == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("FizzBuzz");
		}
		if (f < 100)
		{
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}


