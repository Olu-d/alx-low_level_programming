#include"main.h"

char alph;

void print_alphabet(void)
{
	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}

	_putchar('\n');

}

/**
  * main - check the code.
  *
  * Return: Always 0.
  */
int main(void)
{
	    print_alphabet();
	        return (0);
}
