#include"main.h"

/**
 * print_alphabet - This function prints the alphabets from a - z
 *
 * No main, so no return statement.
 *
 */

void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph); /*call _putchar function to print*/
	}

	_putchar('\n'); /*new line at the end of the print*/

}
