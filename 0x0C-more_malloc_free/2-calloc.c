#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocate memory for an array
 * @nmemb: memory variable
 * @size: size of allocation
 * Return: NUll or result
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array = NULL;
	unsigned int i;
	unsigned int t;
	char *f;

	if (size == 0 || nmemb == 0)
		return (NULL);
	t = nmemb * size;
	array = malloc(t);
	f = (char *)array;
	if (f != NULL)
	{
		for (i = 0; i < t; i++)
			f[i] = 0;
		return (f);
	}
	return (NULL);
}
