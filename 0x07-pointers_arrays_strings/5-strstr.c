#include "main.h"
#include <stdio.h>

/**
 * _strstr - fxn that locates a substring.
 * @haystack: source string to search through.
 * @needle: string to search for.
 *
 * Return: return beginning of located substring or NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int j, z, m;

	j = 0;
	z = 0;
	m = 0;
	while (haystack[j] != '\0')
	{
		if (needle[z] == haystack[j])
		{
			m = 1;
			z++;

		}
		else
		{
			m = 0;
			z = 0;
		}

		if (needle[z] == '\0' && m == 1)
		{
			return ((haystack + j - z + 1));
		}
		else if (needle[z] == '\0' && m == 0)
		{
			return (haystack);
			j++;
		}
	}

	return (NULL);
}

