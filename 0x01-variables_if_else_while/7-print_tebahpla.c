#include<stdio.h>
/**
  * main - Prints the lowercase alphabets a-z in reverse
  *
  * Return: 0 (success)
  */

int main(void)
{
	char ch;

	for (ch = 'z'; ch <= 'z' && ch >= 'a'; ch--)
	{
		putchar(ch);
	}
		putchar('\n');
	return (0);
}
