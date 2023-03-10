#include "main.h"
#include <string.h>

/**
 * _strncat- concat 2 strings
 * @dest: destination
 * @src: source
 * @n: integer variable
 * Return: Always 0
 */

char *_strncat(char dest[50], char src[50], int n)
{
	strncat(dest, src, n);
	return (dest);
}
