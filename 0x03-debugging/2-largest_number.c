#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && b >= c)
	{
		largest = a;
	}
	else if (b >= a && a >= c)
	{
		largest = b;
	}
	else if (a == c && b > a)
	{
		largest = b;
	}
	else if (b <= a && a < c)
	{
		largest = c;
	}
	else if (c <= b && b < a)
	{
		largest = a;
	}
	else if (c == b && b > a)
	{
		largest = c;
	}
	else if (c > a && c == b)
	{
		largest = c;
	}
	else if (a >= c && b >= c)
	{
		largest = b;
	}
	else if (b >= c && a >= b)
	{
		largest = a;
	}
	return (largest);
}
