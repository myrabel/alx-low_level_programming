#include <stdio.h>

/**
 * main - Entry Point
 * Description: 'Print alphabet in lowercase'
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (int x = 'A' ; x <= 'Z' ; x++)

	{
		char small = tolower(x);
		putchar (small);

	}
	return (0);
}
