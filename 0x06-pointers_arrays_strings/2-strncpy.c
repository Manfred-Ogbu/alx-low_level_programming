#include "main.h"

/**
 * _strncpy - this fxn concatenates two strings
 * @dest: the string that will modified.
 * @src: the string that ill be concatenated to @des.
 * @n: how much to copy from src into dest.
 *
 * Return: a pointer to @des
 */
char *_strncpy(char *dest, char *src, int n)
{
	int r = 0;

	for (r = 0 ; r < n && src[r] != '\0'; r++)
		dest[r] = src[r];
	for ( ; r < n ; r++)
		dest[r] = '\0';

	return (dest);
}

