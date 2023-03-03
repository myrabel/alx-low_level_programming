#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strcat-concat 2 strings
 * @dest: destination
 * @src: source
 * Return: Always 0
 */

char *_strcat(char dest[50], char src[50])
{
	strcat(dest, src);
	return (dest);
}
