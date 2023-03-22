#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - function to print name
 * @name: variable
 * @f: function pointer
 * Return: result
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
