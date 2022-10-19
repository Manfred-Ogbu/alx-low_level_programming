#include <stdio.h>

/**
 * print_fibonacci_x50 - this will print the first 50 fibonacci numbers
 * including 1 and 2 at the beginning
 *
 * Return: void
 */
void print_fibonacci_x50(void)
{
	unsigned int h;
	unsigned long int m, n, counter, fib;

	m = 1;
	n = 2;
	h = 50 - 2;
	printf("1, 2, ");
	for (counter = 0 ; counter < h ; counter++)
	{
		fib = m + n;
		printf("%lu", fib);
		m = n;
		n = fib;
		if (counter < h - 1)
		{
			printf(", ");
		}
	}
	putchar('\n');
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_fibonacci_x50();
	return (0);
}

