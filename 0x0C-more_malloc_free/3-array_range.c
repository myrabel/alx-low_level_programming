#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * array_range - creates an array of ints
 * @min: minimum
 * @max: maximum
 * Return: result or NULL otheriwse
 */

int *array_range(int min, int max)
{
	int *array = NULL;
	int i, t, count;

	count = 0;

	if (min > max)
		return (NULL);
	t = (max - min) + 1;
	array = malloc(t * sizeof(int));
	if (array != NULL)
	{
		for (i = min; i <= max; i++)
		{
			array[count] = i;
			count++;
		}
		return (array);
	}
	return (NULL);
}
