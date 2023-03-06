#include "main.h"
#include <string.h>

/**
 * _memcpy - copy bytes from src to dest
 * @dest: destination
 * @src: source
 * @n: integer
 * Return: pointer to destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
	putchar('\n');
}
