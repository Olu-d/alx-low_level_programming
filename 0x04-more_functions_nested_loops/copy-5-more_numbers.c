#include"main.h"

/**
 * more_numbers- Print the numbers 0 to 14 10 times
 * Return: The printed numbers followed by a new line
 *
 *
 */

void more_numbers(void)
{
	int num;

	for (num = 0; num <= 10; num++)
	{
		int i = 0;

		while (i <= 14)
		{
			if (i / 10 > 0)
				_putchar((i / 10) + '0'); /*grab first digit if > 10 */
			_putchar((i % 10) + '0'); /*grab last digit less than 10 */
			i++;
		}
		_putchar('\n');
	}

}
