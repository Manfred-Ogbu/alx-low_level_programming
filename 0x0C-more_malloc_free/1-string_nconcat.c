#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - fxn that concats two strings.
 * @s1: sting to concat to.
 * @s2: string to copy from.
 * @n: amount of s2 to copy.
 * Return: pointer to allocated memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, x, y;

	x = y = 0;
	if (s1)
	for (; s1[x]; x++)
		;
	if (s2)
		for (; s2[y]; y++)
			;
	if (!(n >= y))
		y = n;

	str = malloc(sizeof(char) * (x + y) + 1);
	if (!str)
		return (NULL);

	for (i = 0 ; i < (x + y) ; i++)
	{
		if (i < x)
			str[i] = s1[i];
		else
			str[i] = s2[i - x];
	}

	str[i] = '\0';

	return (str);
}

