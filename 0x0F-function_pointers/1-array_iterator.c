#include"function_pointers.h"
#include<stddef.h>

/**
 * array_iterator - A function that call another function to print the
 * contents of an array
 * @array: input array
 * @size: size of the input array
 * @action: function to call
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

