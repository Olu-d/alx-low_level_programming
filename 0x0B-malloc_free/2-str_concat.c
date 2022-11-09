#include"main.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/*
 * str_concat - A function that concatenates two string literals
 * @s1: string literal 1
 * @s2: string literal 2
 * Return: concatenated string
 */

char *str_concat(char *s1, char *s2)
{

	char *concat_str;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	/*make enough memory to contain plus \0*/
	concat_str = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
	
	/* check that malloc didn't fail */
	if (concat_str == NULL)
		return (NULL);

	/*
	 *as string literal is read only, concatenation cannot be done directly
	 *copy str1 into a variable that is read/write, then concat str2 to it
	 */
	concat_str = strcpy(concat_str, s1);
	concat_str = strcat(concat_str, s2);

	return (concat_str);
}
