#include<stdio.h>

/**
 * main- Entry point. A function that prints the program name
 * @argc: The count of passed arguments
 * @argv: An array of the string parameters
 * Return: 0: success
 */

int main(int argc, char *argv[])
{
	if (argc >= 1)
		printf("%s\n", argv[0]);
	return (0);

}
