#include"main.h"

/**
 * print_most_numbers - Print the numbers 1 to 9
 * Return: The printed numbers followed by a new line
 *
 *
 */

void print_most_numbers(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		if (num == '2' || num == '4')
			continue;
		_putchar(num);
	}

		_putchar('\n');

}

