#include "main.h"
#include <string.h>

/**
 * print_diagsums - print sum of 2 diagonals of sq matrix
 * @a: variable
 * @size: size of array
 * Return: sum
 */

void print_diagsums(int *a, int size)
{
	int sum1, sum2;
	int index;

	for (index = 0; index < size; index++)
	{
		sum1 += a[(index * size) + index];
		sum2 += a[(size - 1) + ((size - 1) * index)];
	}
	printf("%d, %d\n", sum1, sum2);
}
