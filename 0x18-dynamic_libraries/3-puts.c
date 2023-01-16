#include "main.h"
/**
 * _puts - illustrate the stdio.h version of puts
 * @str: the variable that stores the string to send to stdout.
 */
void _puts(char *str)
{
	while (*str > 0)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

