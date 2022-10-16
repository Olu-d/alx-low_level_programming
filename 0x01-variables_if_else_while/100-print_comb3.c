#include<stdio.h>

/**
 * main - entry point.
 * Return: 0 (success)
 */

int main(void)
{
	int first_d;
	int sec_d;

	for (first_d ='0'; first_d <= '9'; first_d++)
	{
		for (sec_d = (first_d + 1); sec_d <= '9'; sec_d++)
		{
			putchar(first_d);
			putchar(sec_d);
			
			if(!(first_d == '8' && sec_d == '9'))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
