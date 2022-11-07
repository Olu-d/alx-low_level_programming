#include"main.h"

/**
  * _islower - This function returns 1 if input alphabet is lowercase
  * Otherwise, it returns 0.
  * @c: Input alphabet between a and z
  * Return: No main, so no return statement.
  *
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
