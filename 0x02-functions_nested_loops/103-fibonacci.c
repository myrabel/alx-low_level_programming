#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print 1 to 89 first'
 * Return: Always 0
 */
int main(void)
{
	unsigned long i, j, k, count, sums;

	i = sums = 0;
	j = 1;
	for (count = 0; count < 50; count++)
	{
		k = i + j;
		i = j;
		j = k;
		if (k % 2 == 0 && k < 4000000)
		{
			sums += k;
		}
	}
	printf("%lu\n", sums);
	return (0);
}
