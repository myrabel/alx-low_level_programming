#include <stdio.h>
/**
 * print_array - prints an array
 * @a: pointer
 * @n: variable
 * Return: Always 0
 */
void print_array(int *a, int n)
{
	short c = 0;

	while (n-- > 0)
	{
		printf("%d", a[c++]);
		if (n != 0)
			printf(", ");
	}
	printf("\n");
}
