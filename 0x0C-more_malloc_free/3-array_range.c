#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range- A function that creates an array of integers ordered from
 * min to max
 * @min: The start value of the array
 * @max: The max value of the array
 * Return: NULL if min > max
 * NULL if malloc fails
 * Otherwise, return array
 */

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
