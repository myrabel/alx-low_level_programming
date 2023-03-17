#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocate memeory block using malloc and free
 * @ptr: pointer
 * @old_size: old size
 * @new_size: new size
 * Return: result or NULL otherwise
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *array = NULL;
	char *p = NULL;
	unsigned int i;
	char *px = NULL;

	if (ptr == NULL)
	{
		array = malloc(new_size);
		if (array == NULL)
			return (NULL);
		return (array);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	p = malloc(new_size);
	if (p != NULL)
	{
		px = (char *)ptr;
		for (i = 0; i < old_size; i++)
			p[i] = px[i];
		free(ptr);
		return (p);
	}
	return (NULL);
}
