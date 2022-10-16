#include<stdio.h>

/**
 * main - entry point. Print combination of three numbers. Skip repeat numbers.
 * Terminate with space and comma except last combo - 789.
 *
 * Return: 0 (success)
 *
 *
 */

int main(void)
{
	int fir_d;
	int sec_d;
	int thir_d;

	for (fir_d = '0'; fir_d <= '9'; fir_d++)
	{
		for (sec_d = (fir_d + 1); sec_d <= '9'; sec_d++)
		{
			for (thir_d = (sec_d + 1); thir_d <= '9'; thir_d++)
			{
				putchar(fir_d) && putchar(sec_d) && putchar(thir_d);
			if (!(fir_d == '7' && sec_d == '8' && thir_d == '9'))
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}

