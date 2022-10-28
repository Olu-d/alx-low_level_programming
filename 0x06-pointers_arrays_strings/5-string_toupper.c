#include"main.h"
#include<stdio.h>


/**
 * string_toupper - A function that changes an input string to uppercase
 * @str: Input string to convert to uppercase
 * Return: uppercase string
 *
 */

char *string_toupper(char *str)
{

	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);

}
