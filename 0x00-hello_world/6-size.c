#include <stdio.h>
/*print the size of various types on the computer this code is compiled on */
int main(size)
{
	int intType;
	float floatType;
	long int longintType;
	char charType;
	long long int longlongType;

	/*evaluate size of variable */
	printf("Size of a char: %2d byte(s)\n", sizeof(charType));
	printf("Size of a int: %2d byte(s)\n", sizeof(intType));
	printf("Size of a long int: %2d byte(s)\n", sizeof(longintType));
	printf("Size of a long long int %2d byte(s)\n", sizeof(longlongType));
	printf("Size of a float: %2d byte(s)\n", sizeof(floatType));
	return (0);
}
