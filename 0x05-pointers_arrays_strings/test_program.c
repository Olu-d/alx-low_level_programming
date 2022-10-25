#include <stdio.h>  
#include <string.h>  
#include"main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string to reverse
 */

void print_rev(char *s)
{

	int len = 0;
	int i;

	/* iterate to find length of string and point to last character */
	while (*s != '\0')
	{
		printf("Length is %d before update\n", len);
		len++;
		printf("Length is %d at the point of update\n", len);
		printf("S is %s before update\n", s);
		s++;
		printf("S is %s at the point of update\n", s);
		printf("\n");
	}
	printf("After entire reversal, s is %s\n", s);	
	/* go back to character before null character */
	s--;
	printf("Character before null is %s\n", s);
	printf("Len is %d\n", len);

	/* print string reversed */
	for (i = len; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
