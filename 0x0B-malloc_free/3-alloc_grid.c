#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - fxn returns a pointer to a 2 dimensional array of
 * integers.
 * @width: colums.
 * @height: rows.
 *
 * Return: Pointer to 2d array.
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int r, x, i;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = (int **)malloc(sizeof(*arr) * height);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = (int *)malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			while (i--)
				free(arr[i]);
			free(arr);
			return (NULL);
		}
	}

	for (r = 0; r < height; r++)
		for (x = 0 ; x < width ; x++)
			arr[r][x] = 0;

	return (arr);
}

