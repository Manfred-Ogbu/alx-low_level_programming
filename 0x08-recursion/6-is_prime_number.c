#include "main.h"
/**
 * prime_num - function for is_prime_number.
 * @b: Original number.
 * @i: initial number.
 *
 * Return: 1 if a Prime else 0
 */
int prime_num(int b, int i)
{
	if (i == 1)
		return (1);
	else if (b % i == 0)
		return (0);
	else if (b % i != 0)
		return (prime_num(b, i - 1));
	return (0);
}

/**
 * is_prime_number - fxn.
 * @n: number to be tested.
 *
 * Return: 1 if a Prime else 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_num(n, n - 1));
}

