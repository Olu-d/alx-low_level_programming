#include<stdio.h>

/**
 *main - The popular FizzBuzz coding challenge
 *Return: Print 1 - 100. Print 'Fizz' if number is multiple of 3.
 *Print 'Buzz' if number is multiple of 5
 *Print 'FizzBuzz' if number is multiple of 3 and 5
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
			printf("%d", i);
		

		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
