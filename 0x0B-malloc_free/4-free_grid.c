#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function to free 2D array
 * @grid: size of array
 * @height: height of array
 * Return: result otherwise NULL
 */

void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
	{
		free(grid[index]);
	}
	free(grid);
}
