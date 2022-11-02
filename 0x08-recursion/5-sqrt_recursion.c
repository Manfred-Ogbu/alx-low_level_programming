#include "main.h"

/**
 * sqrt_rec_prime - fxn for odd numbers and primes.
 * @start: the odd or prime number to check.
 * @n: number to find the square root
 *
 * Return: the square root as an Int.
 */
int sqrt_rec_prime(int start, int n)
{
	if (n < 0)
		return (-1);
	else if (start == n * n)
		return (n);
	return (sqrt_rec_prime(start, n - 2));
}

/**
 * _sqrt_recursion - fxn to find the square root of a given number.
 * @n: number to find the square root of.
 *
 * Return: the sqrt as a Int.
 */
int _sqrt_recursion(int n)
{
	int sqrt;

	if (n < 0)
		return (-1);
	else if (n <= 1 && n >= 0)
		return (n);

	if (!(n % 2))
	{
		if (n / 2 == 2 || n == 2)
			return (2);
		sqrt = _sqrt_recursion(n / 2);
		if (n / sqrt == sqrt)
			return (sqrt);
		else if (sqrt > 1)
		{
			return (sqrt * 2);
		}
		return (-1);
	}
	else
	{
		return (sqrt_rec_prime(n, n - 2));
	}
}

