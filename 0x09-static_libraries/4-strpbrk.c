#include "main.h"
#include <string.h>

/**
 * _strpbrk - search a string for any set of bytes
 * @s: variable
 * @accept: variable
 * Return: pointer to byte that matches condition
 */

char *_strpbrk(char *s, char *accept)
{
	char *ret;

	ret = strpbrk(s, accept);
	return (ret);
	putchar('\n');
}
