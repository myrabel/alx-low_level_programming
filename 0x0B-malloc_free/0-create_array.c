#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * create_array - create an array
 * @size: array size
 * @c: character
 * Return: 0 if null and result otherwise
 */

char *create_array(unsigned int size, char c)
{
	char *array = NULL;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	if (size != 0)
	{
		array = (char *)malloc(size * sizeof(char));
		if (array != NULL)
		{
			for (i = 0; i < size; i++)
				array[i] = c;
		}
	}
	return (array);
}
