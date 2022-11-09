#include"main.h"
#include<stdlib.h>

/**
 * create_array - A function that creates an array of chars,
 * and initializes it with a specific char
 * @size: size of array to create
 * @c: character to fill buffer with
 * Return: pointer to created buffer
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	size_t i;

	/*create buffer of size size*/
	str = malloc(sizeof(char) * size);

	/*Returns NULL if size = 0*/
	if (size == 0)
		return (NULL);


	/*update it with character c*/
	for (i = 0; i <= size; i++)
	{
		if (str == NULL)
		{
			return (NULL);
		}
		str[i] = c;
	}

	return (str);

}
