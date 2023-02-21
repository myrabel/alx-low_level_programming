#include "main.h"
/**
 * print_sign - print sign and n
 * @n: integer used
 * Return: 1 if greater 0 if 0 -1 if less
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
