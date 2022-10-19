#include<stdio.h>
#include"main.h"

/**
  * print_last_digit - This function returns last digit of a number
  * @n: Input number
  * Return: No main, so no return statement.
  *
 */

int print_last_digit(int n)
{
	int lastDigit;

	if (n >= 0)
		lastDigit = n % 10;
	else
		lastDigit = (n * -1) % 10;

	_putchar('0' + lastDigit);
	return (lastDigit);
}
