#include "main.h"

/**
 * print_last_digit - this will print the last digit of a number
 * @m: Number used to find the last digit of a number.
 *
 * Description: This will find the last digit of a number
 *
 * Return: returns last digit as int value.
 */
int print_last_digit(int m)
{
	m %= 10;
	if (m < 0)
	{
		m *= -1;
	}
	_putchar('0' + m);
	return (m);
}

