#include "main.h"

/**
 * _strcpy - function copies the string pointed
 * @dest: pointer to copy the string to.
 * @src: the string to copy to the destination.
 *
 * Return: a copy of the src.
 */
char *_strcpy(char *dest, char *src)
{
	int p = 0;

	while (*src != '\0')
	{
		dest[p] = *src;
		p++;
		src++;
	}
	return (dest);
}

