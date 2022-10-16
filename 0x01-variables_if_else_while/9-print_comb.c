#include<stdio.h>

/**
 * main- Prints 1-9 with comma and space, except after the 9.
 * Achieves this by breaking after the 9 has been printed.
 * Return: 0 (success)
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);

		if (i == '9')
			break;

		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
