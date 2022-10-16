#include<stdio.h>

/**
    * main- print all hexadecimal numbers (base16) using putchar
      * Return: 0 (success)
        */
int main(void)
{
	int b16 = 0;
	int b10 = 0;

	for (b16 = 0; b16 <= 15; b16++)
	{
	/* printf("%x", b16); */
	b10 = printf("%x", b16); /*assign int value to b10*/
	int putchar(int b10);
	}
	putchar('\n');
	return (0);


}
