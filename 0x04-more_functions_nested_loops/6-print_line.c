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

	while (count < n && n > 0)
	{
		_putchar('_');
		count++;
	}
	_putchar('\n');
}
