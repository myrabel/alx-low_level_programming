#include "main.h"

/**
 * factorial - print factorial of integer
 * @n: integer
 * Return: result or -1 for 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1 || n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
