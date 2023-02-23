#include "main.h"

/**
 * print_line - print lines
 * Description - print lines
 * @n: integer
 * Return: void
 */

void print_line(int n);

/**
 * print_line - print lines
 * Description - print lines
 * @n: integer
 * Return: void
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		_putchar('_');
	}
	_putchar('\n');
}
