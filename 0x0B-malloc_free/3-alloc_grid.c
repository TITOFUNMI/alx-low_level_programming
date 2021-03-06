#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array.
 * @height: height of the array.
 *
 * Return:  pointer of an array of integers
 */


int **alloc_grid(int width, int height)
{
	int **grids;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	grids = malloc(sizeof(int *) * height);
	if (grids == NULL)
	{
		free(grids);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grids[i] = malloc(sizeof(int) * width);
		if (grids[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(grids[i]);
			free(grids);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			grids[i][j] = 0;

	return (grids);
}

