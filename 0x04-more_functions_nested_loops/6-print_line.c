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
	int count;

	while (n > 0 && count < n)
	{
		_putchar('_');
		count++;
	}
	_putchar('\n');
}
