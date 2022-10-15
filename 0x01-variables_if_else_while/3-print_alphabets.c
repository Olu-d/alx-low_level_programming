#include<stdio.h>
/**
  * main - Prints lowercase alphabets a-z followed by uppercase alphabets
  * with a newline using putchar.
  * Return: 0 (success)
  */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar ('\n');

	return (0);
}
