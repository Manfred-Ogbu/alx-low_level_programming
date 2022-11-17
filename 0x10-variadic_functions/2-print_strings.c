#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Entry Point
 * @separator: comma space
 * @n: number of items
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *sep, *ptr;
	unsigned int k;
	va_list vlist;

	if (separator == NULL || *separator == 0)
		sep = "";
	else
		sep = (char *) separator;
	va_start(vlist, n);

	if (n > 0)
		printf("%s", va_arg(vlist, char *));
	for (k = 1 ; k < n ; k++)
	{
		ptr = va_arg(vlist, char*);
		if (ptr == NULL)
			ptr = "(nil)";
		printf("%s%s", sep, ptr);
	}
	printf("\n");
	va_end(vlist);
}

