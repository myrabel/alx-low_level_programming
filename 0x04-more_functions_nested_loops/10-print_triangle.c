#include "main.h"

/**
 * print_triangle - print triangle
 * @size: variable
 * Description: print triangle
 * Return: Always 0
 */

void print_triangle(int size);

/**
 * print_triangle - print triangle
 * @size: variable
 * Description: print triangle
 * Return: Always 0
 */

void print_triangle(int size)
{
	int i, j, hash;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size - i; j > 0; j--)
			{
				_putchar(' ');
			}
			for (hash = 0; hash < i; hash++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
