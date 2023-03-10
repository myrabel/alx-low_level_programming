#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if error
 */
int main(int argc, char *argv[])
{
	int i, sum;
	int index1, index2;

	sum = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (index1 = 1; index1 < argc; index1++)
	{
		for (index2 = 0; argv[index1][index2]!= '\0'; index2++)
		{
			if (!isdigit(argv[index1][index2]))
			{
				printf("Error\n");
				return (1);
			}
		}
		i = atoi(argv[index1]);
		if (i < 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
