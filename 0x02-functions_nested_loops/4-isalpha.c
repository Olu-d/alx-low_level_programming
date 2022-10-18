#include"main.h"

/**
  * _isalpha - This function returns 1 if input is an upper or
  * lowercase alphabet or a number. Otherwise, it returns 0.
  * @c: Input alphabet between a and z
  * Return: No main, so no return statement.
  *
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 0 && c <= 9) || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
