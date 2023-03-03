#include "main.h"
#include <string.h>

/**
 * string_toupper - change lowercase to uppercase
 * @arr: array
 * Return: result
 */

char *string_toupper(char arr[])
{
	int j = 0;

	while (arr[j] != '\0')
	{
		if (arr[j] >= 'a' && arr[j] <= 'z')
		{
			arr[j] = arr[j] - 32;
		}
		j++;
	}
	return (arr);
}
