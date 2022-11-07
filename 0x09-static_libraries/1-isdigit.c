#include"main.h"

/**
 * _isdigit- Check if c is a digit or not
 * Return: 1 if c is a digit and 0 otherwise
 * @c: input parameter
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);



}
