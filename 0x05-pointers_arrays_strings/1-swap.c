#include "main.h"

/**
 * swap_int - reset an int value
 * @a: one of two variables to be swaped
 * @b: two of two variables to be swapped
 */
void swap_int(int *a, int *b)
{
	int myholder;

	myholder = *a;

	*a = *b;
	*b = myholder;
}

