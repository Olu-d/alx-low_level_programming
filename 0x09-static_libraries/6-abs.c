#include"main.h"

/**
  * _abs- This function returns:
  * Returns absolute value of input number
  * @n: Input number
  * Return: No main, so no return statement.
  *
 */

int _abs(int n)
{
	int abs;

	if (n >= 0)
	{
		abs = n * 1;
	}
	else
	{
		abs = n * (-1);
	}
	return (abs);
}
