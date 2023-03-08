#include "main.h"
#include <math.h>

/**
 * _pow_recursion - return value of x raised to y
 * @x: int 1
 * @y: power
 * Return: result or -1 for 0
 */

int _pow_recursion(int x, int y)
{
	int res;

	if (y < 0)
	{
		return (-1);
	}
	res = pow(x, y);

	return (res);
}
