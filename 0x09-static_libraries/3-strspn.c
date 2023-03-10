#include "main.h"
#include <string.h>

/**
 * _strspn - get length of a prefix substring
 * @s: variable
 * @accept: variable
 * Return: number of bytes in initial seg
 */

unsigned int _strspn(char *s, char *accept)
{
	int len;

	len = strspn(s, accept);
	return (len);
	putchar('\n');
}
