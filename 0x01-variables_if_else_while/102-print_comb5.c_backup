#include<stdio.h>

/**
 * main - entry point. Print combination of two two-digit numbers separated
 * by space.
 * Last combo should be 98 99.
 * Separate with space and comma except last combo - 9899.
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
	int fourt_d;

	for (fir_d = '0'; fir_d <= '9'; fir_d++)
	{
		for (sec_d = '0'; sec_d <= '8'; sec_d++)
		{
			for (thir_d = '0'; thir_d <= '9'; thir_d++)
			{
				for (fourt_d = '0'; fourt_d <= '9'; fourt_d++)
				{
					if (fir_d == '0' && sec_d == '0' && thir_d == '0' && fourt_d == '0')
					continue;

					putchar(fir_d);
					putchar(sec_d);
					putchar(' ');
					putchar(thir_d);
					putchar(fourt_d);

				if (!(fir_d == '9' && sec_d == '8' && thir_d == '9' && fourt_d == '9'))
				{
					putchar(',');
					putchar(' ');
				}
					}
				}
		}
	}
	putchar('\n');

	return (0);
}

