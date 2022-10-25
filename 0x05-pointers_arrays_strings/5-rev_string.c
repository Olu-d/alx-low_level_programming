#include"main.h"
#include<stdio.h>
#include<string.h>

/**
 * rev_string - A function to reverse an input string
 * @s: input string
 * Return: reversed string
 */

void rev_string(char *s)
{

	int left, right, len;
	int i;
	char temp;

	len = strlen(s);
	left = 0;
	right = len - 1;

	for (i = left; i < right; i++)
	{
		temp = s[i];
		s[i] = s[right];
		s[right] = temp;
		right--;
	}

}
