#include "main.h"

/**
 * _strcat - this fuction will join two strings
 * @dest: the string to be modified.
 * @src: the string that will be joined to @des.
 *
 * Return: a pointer to @dest
 */
char *_strcat(char *dest, char *src)
{
	int index_a = 0;
	int index_b = 0;

	while (dest[index_a] != '\0')
	{
		index_a++;
	}

	while (src[index_b] != '\0')
	{
		dest[index_a + index_b] = src[index_b];
		index_b++;
	}
	dest[index_a + index_b] = '\0';
	return (dest);
}

