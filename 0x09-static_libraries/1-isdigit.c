#include "main.h"

/**
 * _isdigit - check for a digit
 * @c : variable
 * Return: Always 1
 */
int _isdigit(int c);


/**
 * _isdigit - check for a digit
 * @c : variable
 * Return: Always 1
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
