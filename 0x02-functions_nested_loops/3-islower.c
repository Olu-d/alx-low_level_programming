#include <stdio.h>
#include"main.h"

int _islower(int c)
{
	/* Input character from user */
	if(c >= 'a' && c <= 'z')
	{
		return(1);
	}
	else 
	{
		return(0);
	}
}
