#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_rev - print in reverse
 * @s: variable
 * Return: Always 0
 */
void print_rev(char *s)
{
	int len, g;

	len = strlen(s);
	for (g = len - 1; g >= 0; g--)
	{
		printf("%c", s[g]);
	}
	putchar('\n');
}
