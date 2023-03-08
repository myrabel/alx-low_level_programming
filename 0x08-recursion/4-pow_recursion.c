#include "main.h"
#include <math.h>
/**
 *_pow_recursion - exponential function
 *@x: base
 *@y: exponent
 *Return: result of the exponent function
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (1);
	}
}
