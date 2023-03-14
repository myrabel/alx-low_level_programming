#include "main.h"
#include <string.h>
/**
 * _strdup- function to print duplicate string
 * @str: duplicate string
 * Return: NULL if none or result otherwise
 */

char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		char *target = strdup(str);

		return (target);

	}
}
