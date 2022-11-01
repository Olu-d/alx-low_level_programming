#include"main.h"
#include<stdio.h>

/**
 * _memset - writes the text in a buffer b to the address in s from 0 to n
 * The official documentation says function fills the first n bytes of the
 * memory area pointed to by s with the constant byte b
 * @s: array address to point to
 * @b: content to fill in buffer
 * @n: number of bytes to fill
 * Return: s - the array
 *********/


char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

