#include "main.h"
#include <stdlib.h>


/**
 * _bzero - set all the bytes to 0.
 * @dst: pointer.
 * @size: size of the memory per-byte.
 *
 * Return: pointer to memory area dst.
 */

void *_bzero(void *dst, unsigned int size)
{
	char *d = dst;

	do
		* d++ = 0;
	while (--size != 0);
	return (d);
}

 /**
 * _calloc - create an array using calloc
 * @nmemb: number elements.
 * @size: size of the type.
 *
 * Return: pointer to the memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *s;

	if (!nmemb || !size)
		return (NULL);
	s = malloc(nmemb * size);
	if (!s)
		return (NULL);

	_bzero(s, nmemb * size);
	return (s);
}

