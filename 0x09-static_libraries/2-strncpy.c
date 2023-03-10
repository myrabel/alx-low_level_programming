#include "main.h"
#include <string.h>

/**
 * _strncpy - copy a string
 * @dest: destination
 * @src: source
 * @n: integer variable
 * Return: Always 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
