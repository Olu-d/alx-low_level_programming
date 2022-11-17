#include"function_pointers.h"
#include<stdio.h>

/**
 * int_index -  search for integer in array via function pointer
 * @array: input array
 * @size: size of the array
 * @cmp: pointer to searching function that we need to call
 * Return: index if the integer is found, -1 if it is not found
 * or if the array pointer allocation failed
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	/*iterate through the array and call searching function*/
	for (i = 0; i < size; i++)
		if (cmp(*(array + i)) == 1) /* test return value of called fnc */

	/**
	 * or if (cmp(array[i]) to implicitly test if it returns true
	 * in c boolean statements, 0 = FALSE and 1 = TRUE. The f(n) statement
	 * will only execture if the condition is true
	 */
			return (i);

	return (-1);

}
