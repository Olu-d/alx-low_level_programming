#include"main.h"
#include<stdio.h>

/**
 * _strcat - A function taking an array as input that concatenates two strings
 * @dest: Input as well as return parameter
 * @src: Second string to be concatenated
 * Return: dest, which now has the second string concatenated
 */

char *_strcat(char *dest, char *src)
{

	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);

}



