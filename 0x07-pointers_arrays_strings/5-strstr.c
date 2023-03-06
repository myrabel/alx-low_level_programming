#include "main.h"
#include <string.h>

/**
 * _strstr - locate a substring
 * @haystack: where to find the needle
 * @needle: to be found
 * Return: pointer to beginning of substring located
 */

char *_strstr(char *haystack, char *needle)
{
	char *ret;

	ret = strstr(haystack, needle);
	return (ret);
	putchar('\n');
}
