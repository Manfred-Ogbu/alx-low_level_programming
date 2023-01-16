#include "main.h"

/**
 * _strlen - return the length of the string
 * @str: the string to measure.
 *
 * Return: Int value of the length.
 */
int _strlen(char *str)
{
	int counter = 0;

	while (*(str + counter) != '\0')
	{
		counter++;
	}
	return (counter);
}

