#include "main.h"
/**
 * print_rev - illustrates puts
 * @s: the value to send to the stdout in reverse.
 */
void print_rev(char *s)
{
	int n;

	while (*(s + n) != '\0')
	{
		n++;
	}

	while (n--)
	{
		_putchar(*(s + (n)));
	}
	_putchar('\n');
}

