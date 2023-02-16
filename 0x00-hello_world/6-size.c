#include <stdio.h>
/**
 * main - entry point
 * Description - 'print various sizes in bytes
 * return o on success
 *
 */

int main(void)
{
	int intType;
	float floatType;
	long int longintType;
	char charType;
	long long int longlongType;

	/*evaluate size of variable */
	printf("Size of a char: %d byte(s)\n", sizeof(charType));
	printf("Size of an int: %d byte(s)\n", sizeof(intType));
	printf("Size of a long int: %d byte(s)\n", sizeof(longintType));
	printf("Size of a long long int: %d byte(s)\n", sizeof(longlongType));
	printf("Size of a float: %d byte(s)\n", sizeof(floatType));
	return (0);
}
