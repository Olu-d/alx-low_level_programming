#include<stdio.h>
#include "unistd.h"


/**
 * main- entry point. This program prints _putchar to stdout
 * Return: 0 (success)
 */

int main(void)
{
	write(1, "_putchar\n", 9);

	return (0);

}
