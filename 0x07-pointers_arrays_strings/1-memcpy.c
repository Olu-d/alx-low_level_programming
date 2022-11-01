#include"main.h"
#include<stdio.h>

/**
 * _memcpy- function copies n bytes from memory area src to memory area dest
 * @dest: destination pointer/array
 * @src: bytes to copy
 * @n: number of bytes to copy
 * Return: dest - a pointer to the array
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];

	}
	return (dest);

}

