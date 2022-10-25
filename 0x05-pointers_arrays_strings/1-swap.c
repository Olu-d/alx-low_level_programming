#include"main.h"
#include<stdio.h>

/**
 * swap_int - swap the values of integers at the pointers pointed to
 * @a: pointer to first input parameter
 * @b: pointer to second input parameter
 *
 */

void swap_int(int *a, int *b)
{

	int temp;

	temp = *a;
	*a = *b;
	*b = temp;


}
