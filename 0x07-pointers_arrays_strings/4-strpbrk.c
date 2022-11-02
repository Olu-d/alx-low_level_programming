#include"main.h"
#include<string.h>
#include<stdio.h>

/**
 * _strpbrk - The _strpbrk() function locates the first occurrence
 * in the string s of any of the bytes in the string accept
 * @s: The string to edit and return a pointer to
 * @accept: The byte to test for matches in
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
/*	int accept_len = strlen(accept); */

	i = 0;

	while (s[i] != '\0')
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				s = &s[i];
				return (s);
			}
		}
	i++;
	}
	return(NULL);
}
