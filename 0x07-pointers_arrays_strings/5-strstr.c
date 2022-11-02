#include"main.h"
#include<string.h>
#include<stdio.h>

/**
 * _strstr - The _strstr() function finds the first occurrence of the
 * substring needle in the string haystack.
 * The terminating null bytes (\0) are not compared
 * @haystack: Pointer to the string literal to search inside of
 * @needle: Pointer to the string literal to match
 * Return: Returns a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */


char *_strstr(char *haystack, char *needle)
{
	size_t i = 0;

	while (*haystack != '\0')
	{
		if (*haystack == needle[0])
		{
			for (i = 0; i < strlen(needle); i++)
			{
				if (haystack[i] == needle[i])
				{
					return (haystack);
				}
			}
		}
	haystack++;
	}
	return (NULL);
}
