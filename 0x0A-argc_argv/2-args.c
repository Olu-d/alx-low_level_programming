#include<stdio.h>

/**
 * main - entry point. Function prints all arguments it receives.
 * @argv: vector containing argument strings
 * @argc: count of arguments
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);


}
