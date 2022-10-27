#include "main.h"

/**
 * _strncpy - will concatenates two strings
 * @dest: the string that will modified.
 * @src: the string that will be concatenated to @des.
 * @n: how much to copy from src into dest.
 *
 * Return: a pointer to @dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int k = 0;

	for (k = 0 ; k < n && src[k] != '\0'; k++)
		dest[k] = src[k];
	for ( ; k < n ; k++)
		dest[k] = '\0';

	return (dest);
}

