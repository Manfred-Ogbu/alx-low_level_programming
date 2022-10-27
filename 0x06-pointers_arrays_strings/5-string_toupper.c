#include "main.h"

/**
 * string_toupper - converts all lowercase alphabets to uppercase.
 * @s: string to process.
 *
 * Return: a pointer.
 */
char *string_toupper(char *s)
{
	int p;

	p = 0;
	while (s[p] != '\0')
	{
		if (s[p] >= 'a' && s[p] <= 'z')
		{
			s[p] -= 32;
			p++;
		}
	}
	s[p] = '\0';

	return (s);
}

