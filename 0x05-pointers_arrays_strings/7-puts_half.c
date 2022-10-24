#include "main.h"

/**
 * puts_half - prints half of a string.
 * @str: string to process.
 */
void puts_half(char *str)
{
	int length = 0;

	while (*(str + length) != '\0')
	{
		length++;
	}
	if (!(length % 2))
		length /= 2;
	else
		length = (length + 1) / 2;

	while (*(str + length) != '\0')
	{
		_putchar(*(str + length));
		length++;
	}
	_putchar('\n');
}

