#include"main.h"
#include<stdio.h>

/**
 * print_to_98 - Prints numbers from n to 98
 *
 */

void print_to_98(int n)
{
	while (n < 98)
	{
		_putchar(n);
		_putchar(',');
		_putchar(' ');
		n++;
	}

	while (n > 98)
	{
		_putchar(n);
		_putchar(',');
		_putchar(' ');
		n--;
	}

	if (n == 98)
	{
		_putchar('0' + n);
		_putchar(',');
		_putchar(' ');
	}
}