#include "main.h"

/**
 * more_numbers: print 10 times
 * Description: print 0 to 14
 * Return: Always 0
 */

void more_numbers(void);

/**
 * more_numbers: print 10 times
 * Description: print 0 to 14
 * Return: Always 0
 */

void more_numbers(void)
{
	int i, count;

	for (i = 0; i <= 4; i++)
	{
		for (count = 0; count <= 10; count++)
		{
			_putchar((i / 10) + '0');
		}
		_putchar((i % 10) + '0');
	}
	_putchar('\n');
}
