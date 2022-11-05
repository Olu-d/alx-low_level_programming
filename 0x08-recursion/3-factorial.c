#include"main.h"

/**
 * factorial- a function that returns the factorial of a given number
 * @n: The number to return the factorial of
 * Return: 0 if n is 0, -1 if n < 0, factorial of number if n > 0
 */

int factorial(int n)
{
	if (n == 0) /*base case*/
		return (1);

	if (n < 0)
		return (-1);

	return (n * factorial(n - 1)); /* nth case and subsequent cases */

}
