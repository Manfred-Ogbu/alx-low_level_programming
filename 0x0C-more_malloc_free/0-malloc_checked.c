#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - fxn that allocates memory and also checks if successful
 * @b: size of memory to allocate.
 *
 * Return: pointer to memory, Else if return exit status 98.
 */
void *malloc_checked(unsigned int b)
{
	void *m;

	m = malloc(b);
	if (m == NULL)
	{
		free(m);
		exit(98);
	}
	return (m);
}

