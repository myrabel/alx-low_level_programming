#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * fizz_buzz - print numbers
 * Description: Fizz Buzz
 * @i: integer
 * Return: Always 0
 */

void fizz_buzz(int i);

/**
 * main - Entry point
 * Description: Fizz Buzz
 * Return: Always 0
 */

int main(void)
{
	fizz_buzz(100);
	return (0);
}

/**
 * fizz_buzz - print numbers
 * Description: Fizz Buzz
 * @i: integer
 * Return: Always 0
 */

void fizz_buzz(int i)
{

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (i % 5 == 0)
		{
			printf(" Buzz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else
		{
			printf(" %d", i);
		}
		printf("\n");
	}
}
