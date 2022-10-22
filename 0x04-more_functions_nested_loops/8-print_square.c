#include"main.h"
#include<stdio.h>
/**
 * print_square - print a square to the terminal
 * @size: size of desired square
 * Return: drawn square followed by new line
 **/

void print_square(int size)
{
	int a;
	int b = 1;

	if (size > 0)
	{
		while (b <= size)
		{
			for (a = 1; a <= size; a++)
			{
				_putchar('#');

			}
		_putchar('\n');
		b++;
		}
	}
	else
		_putchar('\n');
}
