#include"main.h"

/**
 * print_alphabet_x10- This function prints the alphabets from a-z
 * i times.
 * No main, so no return statement.
 *
 */

void print_alphabet_x10(void)
{
	char alph;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		{
			_putchar(alph); /*call _putchar function to print*/
		}

	_putchar('\n'); /*new line at the end of the print*/

	}
}
