#include "main.h"

/**
 * _atoi - converts a string to integer
 * @s: string to convert
 * Return: value
 */
int _atoi(char *s)
{
	int g = 1;
	unsigned int number = 0;

	while (!('0' <= *s && *s <= '9') && *s != '\0')
	{
		if (*s == '-')
			g *= -1;
		if (*s == '+')
			g *= +1;
		s++;
	}
	while ('0' <= *s && *s <= '9' && *s != '\0')
	{
		number = (number * 10) + (*s - '0');
		s++;
	}
	return (number * g);
}

