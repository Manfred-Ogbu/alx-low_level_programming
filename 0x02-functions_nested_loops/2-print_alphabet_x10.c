#include "main.h"
/**
 * print_alphabet_x10 - function to print lowercase alphabets 10 times
 *
 */
void print_alphabet_x10(void)
{
	char n;
	int counter;

	for (counter = 0 ; counter < 10 ; counter++)
	{
		for (n = 'a' ; n <= 'z' ; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}

