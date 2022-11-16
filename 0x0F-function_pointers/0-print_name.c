#include "main.h"

/**
 * print_name - prints a name.
 * @name: string to print.
 * @f: fuction to use.
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (!f || !name)
		return;
	f(name);
}

