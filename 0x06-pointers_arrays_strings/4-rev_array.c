#include "main.h"

/**
 * reverse_array - reverse array contents
 * @a: int 1
 * @n: elements in array
 * Return: reversed array
 */

void reverse_array(int *a, int n)
{
	int l = 0;
	int r = n - 1;

	while (l < r)
	{
		int temp;

		temp = arr[1];
		arr[1] = arr[r];
		arr[r] = temp;
		l++;
		r--;
	}
}
