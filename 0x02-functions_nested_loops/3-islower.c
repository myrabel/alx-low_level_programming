#include "main.h"
/**
 * _islower - check if is lower
 * @c - character to be checked
 * Return: 1 if false
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
