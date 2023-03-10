#include "main.h"
#include <string.h>

/**
 * _strchr- locate a character in a string
 * @s: variable
 * @c: variable
 * Return: pointer to first occurrence
 */

char *_strchr(char *s, char c)
{
	char *p;

	p = strchr(s, c);
	return (p);
	putchar('\n');
}
