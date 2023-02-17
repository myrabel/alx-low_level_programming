#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print 0 to 9 using putchar'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		putchar((a) + '0');

		if (a < 9)
		{
			putchar(',');
			putchar(' ');

		}
	}
	putchar('\n');
	return (0);
}
