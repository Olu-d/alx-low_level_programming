#include"main.h"


/**
 * _strlen_recursion- a function that returns the length of
 * a string recursively
 * @s: input string
 * Return: length of input string
 */


int _strlen_recursion(char *s)
{
	if (*s == '\0') /*base case if the string is/becomes empty*/
		return (0);

	return (1 + _strlen_recursion(s + 1));

}

