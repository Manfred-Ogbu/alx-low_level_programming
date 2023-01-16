#include "main.h"

/**
 * _memcpy - This fxn copies n bytes from a source to a destination.
 * @dest: destionation
 * @src: source.
 * @n: number of bytes to copy.
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	k = 0;

	while (k < n)
	{
		dest[k] = src[k];
		k++;
	}
	return (dest);
}

