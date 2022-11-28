#include"main.h"

/********/

int main(void)
{

	int i;
	int size = 4;
	int newline;
	int pound;
	
	for (i = 1; i <= size; i++)
	{
		newline = size - i;
		while (newline < size)
		{
			_putchar('\n');
			newline++;
		}
		pound = size - newline;
		while (pound <= i)
		{
		_putchar('#');
		pound++;
		}
		newline = size;

	}



	_putchar('\n');
	return (0);
}
