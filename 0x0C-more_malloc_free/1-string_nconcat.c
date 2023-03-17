#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatentate 2 strings
 * @s1: pointer
 * @s2: pointer
 * @n: unsigned int variable]
 * Return: if failed return NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newstr = NULL;
	unsigned int i, n1, n2, j, count, palabras;

	count = 0;
	palabras = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (n1 = 0; s1[n1] != '\0'; n1++)
		;
	for (n2 = 0; s2[n2] != '\0'; n2++)
		;
	if (n >= n2)
	{
		palabras = n2;
	}
	else
	{
		for (n2 = 0; n2 < n; n2++)
			palabras++;
	}
	newstr = (char *)malloc((n1 + n2 + 1) * sizeof(char));
	if (newstr == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
		newstr[i] = s1[i];
	for (j = 0; j < palabras; i++)
	{
		newstr[i] = s2[count];
		count++;
		j++;
	}
	newstr[i] = '\0';
	return (newstr);
}
