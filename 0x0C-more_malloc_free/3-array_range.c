#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int *array_range(int min, int max)
{
	int *arr;
	int i;
	
	/*validate input*/
	if (min > max)
		return (NULL);

	/*allocate memory*/
	arr = malloc(sizeof(int) * max + 1);

	/*confirm if malloc didnt fail*/
	if (arr == NULL)
		return (NULL);

	for (i = 0; i <= max; i++)
	{
		arr[i] = min;
		min++;
	}

	return (arr);

}
