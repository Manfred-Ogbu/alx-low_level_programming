#include "main.h"
#include <stdio.h>

/**
 * puts2 - every other char.
 * @str: string to use
 */
void puts2(char *str)
{
	int k;

	for (k = 0 ; str[k] != '\0' ; k++)
	{
		if ((k % 2) == 0)
			_putchar(*(str + k));
	}
	_putchar('\n');
}

