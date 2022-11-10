#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - Fxn to create and array of integers.
 * @min: beginning
 * @max: end
 *
 * Return: pointer to the area in memory.
 */
int *array_range(int min, int max)
{
	int *m;
	int j;

	if (min > max)
		return (NULL);
	j = max - min;

	m = malloc(sizeof(int) * (j + 1));
	if (!m)
		return (NULL);
	while (max > min)
	{
		m[j] = max;
		j--;
		max--;
	}
	m[j] = min;
	return (m);
}

