#include "main.h"

/**
 * int_index - loop over an array and executes passed functions on the
 * elements.
 * @array: array of int.
 * @size: size of array.
 * @cmp: is the fxn to execute on the array.
 *
 * Return: Index (int)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = size;
	if (size <= 0)
		return (-1);
	if (!array || !cmp)
		return (-1);

	while (size--)
	{
		if (cmp(array[i - size]))
			return (i - size);
	}

	return (-1);
}

