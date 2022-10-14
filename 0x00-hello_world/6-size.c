#include <stdio.h>
/**
* main - prints the size of variables on machine code is compiled and run on
* Return: returns 0 (success)
 */
int main(void)
{
	int intType;
	float floatType;
	double doubleType;
	char charType;
	long int longintType;
	long long int longlongintType;

	printf("Size of a char: %ld byte(s)\n", sizeof(charType));
	printf("Size of an int: %ld byte(s)\n", sizeof(intType));
	printf("Size of a long int: %ld byte(s)\n", sizeof(longintType));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(longlongintType));
	printf("Size of a float: %ld byte(s)\n", sizeof(floatType));


	return (0);
}
