#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print all numbers of base 16'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int hexa;

	for (hexa = 0; hexa <= 15; hexa++)
		putchar((hexa % 16) + '0');
	putchar('\n');
	return (0);
}
