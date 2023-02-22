#include <stdio.h>
/**
 * main - Entry point
 * Description: compute sum of multiples of 3 and 5
 * Return: Always 0
 */
int main(void)
{
	int i, res;

	for (i = 0; i < 1024; i++)
		if (i % 3 == 0 || i % 5 == 0)
			res += i;
	printf("%d\n", res);
	return (0);
}
