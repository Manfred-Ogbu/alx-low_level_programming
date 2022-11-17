#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Entry Point
 * @separator: comma space
 * @n: elements to print
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	char *m;
	unsigned int i;
	va_list vlist;

	if (separator == NULL || *separator == 0)
		m = "";
	else
		m = (char *) separator;
	va_start(vlist, n);

	if (n > 0)
		printf("%d", va_arg(vlist, int));
	for (i = 1 ; i < n ; i++)
		printf("%s%d", m, va_arg(vlist, int));
	printf("\n");
	va_end(vlist);
}

