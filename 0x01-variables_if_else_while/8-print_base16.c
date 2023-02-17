#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print all numbers of base 16'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int hexa;
	char h;

	for (hexa = 0; hexa <= 10; hexa++)
		putchar((hexa % 16) + '0');
	for (h = 'a'; h <= 'f'; h++)
		putchar(h);

	putchar('\n');
	return (0);
}
