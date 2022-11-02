#include "main.h"

/**
 * _print_rev_recursion - fxn that prints a string in reverse.
 * @s: string to print in reverse.
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (!*s)
	{
		return;
	}
	_print_rev_recursion((s + 1));
	_putchar(*s);
}

