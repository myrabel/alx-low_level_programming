#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @c: character
 * Return:  for true
 */
int _isupper(int c);
{
	int ch;

	if (c >= 'A' && c <= 'Z')
	{
		ch = 1;
	}
	else if (c >= 'a' && c <= 'z')
	{
		ch = 0;
	}
	return (ch);
}
