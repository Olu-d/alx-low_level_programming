#include<stdio.h>
/**
  * main - Prints the lowercase alphabets a-z with a newline using putchar
  *
  * Return: 0 (success)
  */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'q' || ch == 'e')
			continue;
		putchar(ch);
	}
		putchar('\n');
	return (0);
}
