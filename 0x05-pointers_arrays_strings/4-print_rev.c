#include <stdio.h>  
#include <string.h>  
#include"main.h"

void print_rev(char *s)
{  
    char str[1000], temp; // define the size of str[] array  
    int i, left, right, len;  
    len = strlen(str); // get the length of the string  
    left = 0; // set left index at 0  
    right = len - 1; // set right index len - 1  
    // use for loop to store the reverse string  
    for (i = left; i <right; i++)  
    {  
        temp = str[i];  
        str[i] = str[right];  
        str[right] = temp;  
        right--;  
    }  


    len = strlen(str);
    for (i = 0; i < len; i++)
	    _putchar(str[i]);
    	_putchar('\n');
}  
