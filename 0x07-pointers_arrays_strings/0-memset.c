#include "main.h"

/**
 * _memset - this funtion fills memory with a constant byte.
 * @b: the constant byte.
 * @n: number of bytes.
 * @s: pointers to memory.
 *
 * Return: A pointer to memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	j = 0;
	while (j < n)
	{
		s[j] = b;
		j++;
	}

	return (s);
}

