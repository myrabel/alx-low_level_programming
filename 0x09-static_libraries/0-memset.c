#include "main.h"
#include <string.h>

/**
 * _memset - Pointer
 * @s: character
 * @b: character
 * @n: integer
 * Return: pointer to memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
	putchar('\n');
}
