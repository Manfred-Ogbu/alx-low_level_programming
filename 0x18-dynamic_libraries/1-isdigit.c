#include "main.h"

/**
 * _isdigit - check the given value is a digit
 * @k: values to check
 *
 * Return: 1 if digit else 0 (False)
 *
 */
int _isdigit(int k)
{
	if (k >= '0' && k <= '9')
	{
		return (1);
	}
	return (0);
}

