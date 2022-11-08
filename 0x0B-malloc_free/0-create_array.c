#include <stdlib.h>

/**
 * create_array - creates an array of a given size and fill with a char.
 * @size : the Size of the array to make.
 * @c: characture to fill the array with.
 *
 * Return: An array of xters
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *q;

	if (size <= 0)
		return (0);
	q = malloc(size);
		if (q == 0)
			return (0);
	i = 0;
	while (i < size)
	{
		q[i] = c;
		i++;
	}
	return (q);
}

