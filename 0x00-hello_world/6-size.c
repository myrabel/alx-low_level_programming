#include <stdio.h>
/*print the size of various types on the computer this code
 * is compliled on
 */
int main(void)
{
	int intType;
	float floatType;
	long int longintType;
	char charType;
	long long int longlongType;

	/*evaluate size of variable */
	printf("Size of char: %2d byte(s)\n", sizeof(charType));
	printf("Size of int: %2d byte(s)\n", sizeof(intType));
	printf("Size of long int: %2d byte(s)\n", sizeof(longintType));
	printf("Size of long long int %2d byte(s)\n", sizeof(longlongType));
	printf("Size of float: %2d byte(s)\n", sizeof(floatType));
	return (0);
}
