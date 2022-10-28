#include"main.h"
#include<stdio.h>

/**
 * _strcat - A function taking an array as input that concatenates two strings
 * @dest: Input as well as return parameter
 * @src: Second string to be concatenated
 * Return: dest, which now has the second string concatenated
 */

/* if we decide to use a temp storage */
char *_strcat(char *dest, char *src)
{

	int i = 0;
	int j = 0;
	char temp[15];

	while (dest[i] != '\0')
	{
		temp[i] = dest[i];
		i++;
	}

	while (src[j] != '\0')
	{
		temp[i] = src[j];
		j++;
		i++;
	}

	temp[i] = '\0';
	dest = temp;

	return (dest);

}



/* another really way to approach using pointers */

/*
char *_strcat(char *dest, char *src)
{

	int i = 0;
	int j = 0;

	while(*(dest + i))
		i++;

	while(*(src + j))
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}

	*(dest + i ) = '\0';


	return (dest);
}
*/
