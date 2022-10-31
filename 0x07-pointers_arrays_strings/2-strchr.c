#include "main.h"

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

	for (counter = 0 ; s[counter] >= '\0' ; counter++)
	{
		if (s[counter] == c)
			return (s + counter);
	}
	return ('\0');
}

