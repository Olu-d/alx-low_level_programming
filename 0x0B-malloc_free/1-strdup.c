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


	int len;
	char *string;

	if (str == NULL)
		return (NULL);
	/*
	 * The check for NULL needed to happen before the strlen function
	 * otherwise, we would have a segfault
	 */
	len = strlen(str);
	string = malloc(sizeof(str) * len);

	if (string == NULL)
		return (NULL);

	strcpy(string, str);
	/**
	 * using strcpy because string = str would mean reassigning
	 * the mem address of string to the pointer str. Then freeing
	 * string will give an error because you would then be trying
	 * to free a string literal from memory
	 */


	return (str);
}
