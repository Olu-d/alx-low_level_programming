#include"main.h"
#define NULL 0

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

	/*continue to increment i until first occurrence of c */
	while (s[i] != '\0' && s[i] != c)
		i++;

	if (s[i] == c) /*when you hit c, return address of the location */
	{
		return (&s[i]);
	}
	else
	{
		return (NULL);
	}
	return (s);


}
