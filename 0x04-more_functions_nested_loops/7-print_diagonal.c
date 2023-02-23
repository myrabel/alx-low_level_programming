#include "main.h"

/**
 * print_diagonal - print diagonals
 * @n: variable
 * Description: print diagonals
 * Return: Always 0
 */

void print_diagonal(int n);

/**
 * print_diagonal - print diagonals
 * @n: variable
 * Description: print diagonals
 * Return: Always 0
 */

void print_diagonal(int n)
{
	int space, slash;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (slash = 0; slash < n; slash++)
		{
			for (space = 0; space < slash; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
