#include <stdio.h>
/**
 * main - Entry point
 * Description: 'two digit combinations'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;

	for (a = 0; a <= 9; a++)
		for (b = a + 1; b <= 9; b++)
		{
			if (a != b)
			{
				putchar((a) + '0');
				putchar((b) + '0');
			}
			putchar(',');
			putchar(' ');
		}
	putchar('\n');
	return (0);
}
