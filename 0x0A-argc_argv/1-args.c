#include<stdio.h>

/**
 * main- entry point. A function that prints the number of arguments passed
 * from the command line
 * @argc: count of arguments
 * @argv: vector of string arguments
 * Return: Count of arguments
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
