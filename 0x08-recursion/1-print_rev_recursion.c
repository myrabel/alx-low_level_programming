#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - print string in reverse
 * @s: variable
 * Return: Always 0
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
