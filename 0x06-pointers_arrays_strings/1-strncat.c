#include "main.h"

/**
 * _strncat - this fxn concatenates two strings
 * @dest: the string that will changed.
 * @src: the string that ill be concatenated to @dest.
 * @n: copy up to position 'n'
 * Return: a pointer to @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int m = 0;
	int k = 0;

	while (dest[m] != '\0')
	{
		m++;
	}

	while (k < n && src[k] != '\0')
	{
		dest[m + k] = src[k];
		k++;
	}
	dest[m + k] = '\0';

	return (dest);
}

