#include"main.h"

/**
 * _pow_recursion- A function that returns the value of x
 * raised to the power of y
 * @x: Number to multiply y times
 * @y: Number of times to multiply x by itself
 * Return: -1 if y < 0, x if y = 1, 1 if y = 0 and x * x y times if y > 0
 **/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 1)
		return (x);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, --y));
}
