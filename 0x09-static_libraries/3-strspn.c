#include"main.h"
#include<stdio.h>
#include<string.h>
/**
 * _strspn - a function that gets the length of a prefix substring.
 * Returns the number of bytes in the initial segment of s which consist
 * only of bytes from accept
 * @s: pointer to input string literal
 * @accept: pointer to input string literal to compare against
 * Return: value of bytes in intial segment of s can be found in accept
 ****/


unsigned int _strspn(char *s, char *accept)
{

	int i, j;
	int counter = 0;
	int i_len = strlen(accept);
	int j_len = strlen(s);

	for (i = 0; i <= i_len - 1; i++)
	{
		for (j = 0; j < j_len; j++)
		{
			if (s[j] == ' ')
			{
				break;
			}
			else if (s[j] == accept[i])
			{
				counter += 1;
			}
		}
	}
	return (counter);


}
