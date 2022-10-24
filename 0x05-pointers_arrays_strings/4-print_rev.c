#include "main.h"
/**
 * print_rev - illustrates puts
 * @s: the value to send to the stdout in reverse.
 */
void print_rev(char *s)
{
	int n = 0;

	while (s[n] != '\0')
		n++;
	for (n = n - 1 ; n >= 0 ; n--)
		_putchar(s[n]);

	_putchar('\n');
}

