#include"main.h"



/**
 * _strncpy - A function that copies one string into another
 * @dest: The destination string
 * @src: The source string
 * @n: The number of bytes.
 * Return: dest, the copied text
 */



char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i]; /*copy source into destination */
	}

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

