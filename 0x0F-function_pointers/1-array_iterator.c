#include <stdlib.h>

/**
 * array_iterator - fxn that executes a fxn.
 * @array: array to loop.
 * @size: size of the array.
 * @action: the fuction to execute array and size on.
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (!array || !size || !action)
		return;

	while (size--)
		action(*array++);
}

