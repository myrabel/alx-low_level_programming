#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * malloc_checked - allocate memory
 * @b: unsigned int variable
 * Return: terminate with 98
 */

void *malloc_checked(unsigned int b)
{
	void *p = NULL;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
