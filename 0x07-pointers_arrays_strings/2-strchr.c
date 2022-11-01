#include"main.h"
#include <stddef.h>

/**
 * _strchr - Returns a pointer to the first occurrence of the
 * character c in the string s, or NULL if the character
 * is not found
 * @s: pointer to array
 * @c: character to find
 * Return: pointer to array - s
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	if (s[0] == '\0')
	{
		return (NULL);
	}
	else
	{
		while (s[i] != '\0')
		{
			if (s[i] == c)
			{
				break;
			}
			s++;

		}
	}
	return (s);


}

