#include"main.h"
#include<stdlib.h>
#include<string.h>
#include<stdio.h>

/**
 * _strdup - A function that copies the contents of a string into a memory loc
 * @str: Input string to copy
 * Return: pointer to allocated memory
 */

char *_strdup(char *str)
{
	int len = strlen(str);
	char *string;

	/*allocate memory*/
	string = malloc(sizeof(str) * len);

	if (str == NULL)
	{
		return (NULL);
	}
	else if (string == 0)
	{
		return (NULL);
	}
	else
	{
		strcpy(string, str);
		/**
		 * using strcpy because string = str would mean reassigning
		 * the mem address of string to the pointer str. Then freeing
		 * string will give an error because you would then be trying
		 * to free a string literal from memory
		 */
	}

	return (string);
}
