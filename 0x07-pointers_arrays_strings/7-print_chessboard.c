#include "main.h"
#include <string.h>

/**
 * print_chessboard - print a chessboard
 * @a:integer for row value
 * Return: Always 0
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			putchar(a[i][j]);
		}
		putchar('\n');
	}
}
