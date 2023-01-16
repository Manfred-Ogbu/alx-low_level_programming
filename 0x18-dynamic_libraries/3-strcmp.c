#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: the string to compare with.
 * @s2: the string to compare.
 *
 * Return: an int value.
 */
int _strcmp(char *s1, char *s2)
{
	int b;

	b = 0;
	while (s1[b] != '\0' && s2[b] != '\0')
	{
		if (s1[b] != s2[b])
			return (s1[b] - s2[b]);
		b++;
	}

	return (s1[b] - s2[b]);
}

