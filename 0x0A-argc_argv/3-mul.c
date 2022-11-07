#include<stdio.h>
#include<stdlib.h>

/**
 * main- entry point. Print the product of cmd line argument numbers
 * @argc: counter of input argument
 * @argv: vector of input strings
 * Return: 0 (success), 1 if less than two arguments are passed
 */

int main(int argc, char *argv[])
{

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}


	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
