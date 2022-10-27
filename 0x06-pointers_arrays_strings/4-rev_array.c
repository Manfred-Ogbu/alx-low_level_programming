#include "main.h"

/**
 * reverse_array - fxn reverses an array
 * @a: the array to reverse
 * @n: number of elements to reverse.
 */
void reverse_array(int *a, int n)
{
	int placeholder;
	int v;

	n--;
	for (v = 0 ;  v < n ; v++)
	{
		placeholder = a[v];
		a[v] = a[n];
		a[n] = placeholder;
		n--;
	}
}

