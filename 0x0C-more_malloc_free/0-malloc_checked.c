#include<stdio.h>
#include<stdlib.h>

/**
 * malloc_checked - Allocate memory for passed parameter
 * @b: Input parameter
 * Return: Pointer for allocated memory. Exit with error code 98 otherwise.
 */

void *malloc_checked(unsigned int b)
{
	int *mem;

	mem = malloc(b);

	if (mem == NULL)
		exit(98); /*exit and terminate the entire program*/

	return (mem);


}
