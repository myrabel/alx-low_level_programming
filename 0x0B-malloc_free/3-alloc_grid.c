#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - return pointer to 2 dimensional array
 * @width: width of array
 * @height: height of array
 * Return: result or NULL if not available
 */

int **alloc_grid(int width, int height)
{
	int **matrix;
	int i, j, l;
	int *p;

	if (width <= 0 || height <= 0)
		return (NULL);
	matrix = (int **)malloc(height * sizeof(int *));
	if (matrix == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		*(matrix + i) = (int *)malloc(width * sizeof(int));
		if (*(matrix + i) == NULL)
		{
			for (i = 0; i < height; i++)
			{
				p = matrix[i];
				free(p);
			}
			free(matrix);
			return (NULL);
		}
	}
	for (l = 0; l < height; l++)
	{
		for (j = 0; j < width; j++)
		{
			matrix[i][j] = 0;
		}
	}
	return (matrix);
}

