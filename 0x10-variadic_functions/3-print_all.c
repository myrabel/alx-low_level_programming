#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_all - function that prints everything
 * @format: list of arguments
 * Return: result or null
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0;
	char *temp;

	va_start(ap, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
			printf("%c", (char) va_arg(ap, int));
			break;
			case 'i':
			printf("%d", va_arg(ap, int));
			break;
			case 'f':
			printf("%f", (float) va_arg(ap, double));
			break;
			case 's':
			temp = va_arg(ap, char*);
			if (temp != NULL)
			{
				printf("%s", temp);
				break;
			}
			printf("(nil)");
			break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f'
					|| format[i] == 's') && format[(i + 1)] != '\0')
			printf(", ");
		i++;
	}
	va_end(ap);
	printf("\n");
}
