#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - execute a function on each array element
 * @array: array
 * @size: size of array
 * @action: action
 * Return: result
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (action == NULL || array == NULL)
		return;

	for (; i < size; i++)
		action(array[i]);
}
