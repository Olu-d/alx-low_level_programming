#include"main.h"
#include<stdio.h>


/**
 * _strlen - Function to get the length of a string
 * @str: The input string
 * Return: Length of the string
 */


int _strlen(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}

	return (len);
}

/**
 * puts_half - Function to return half a string (first half if number
 * of characters is odd
 * @str: The input string
 */

void puts_half(char *str)
{
	int i;
	int len, half;

	len = _strlen(str);
	half = len / 2;



	if (len % 2 != 0)
	{
		for (i = 0; i < half + 1; i++)
		{
			_putchar(str[i]);

		}
	}
	else
	{
		for (i = half; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
