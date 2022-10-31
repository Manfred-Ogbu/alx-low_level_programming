#include "main.h"
#include <stdio.h>

/**
 * _strchr - returns a point to the first occurance of a character in a string.
 * @s: string to search for the character
 * @c: char to the search for.
 *
 * Return: pointer to char or else NULL.
 */
char *_strchr(char *s, char c)
{
	int counter;

	counter = 0;
	while (s[counter] != '\0')
	{
		if (s[counter] == c)
		{
			return ((s + counter));
			counter++;
		}
	}
	if (c == '\0')
	{
		return ((s + counter));
	}
	return (NULL);
}

