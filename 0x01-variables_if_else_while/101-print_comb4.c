#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print 3 digit combos'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a <= 9; a++)
		for (b = a + 1; b <= 9; b++)
			for (c = b + 1; c <= 9; c++)
			{
				if (a != b)
				{
					putchar((a) + '0');
					putchar((b) + '0');
				}
				if (b != c)
				{
					putchar((c) + '0');
				}
				putchar (',');
				putchar(' ');
			}
	putchar('\n');
	return (0);
}
