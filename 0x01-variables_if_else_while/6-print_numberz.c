#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print numbers of base 10 using putchar'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		putchar((num % 10) + '0');

	putchar('\n');
	return (0);
}
