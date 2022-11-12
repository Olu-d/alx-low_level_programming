#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc- Alloates memory for an nmemb elements of size bytes each
 * using malloc
 * @nmemb: Number of elements in the array
 * @size: Number of bytes of each element
 * Return: NULL if nmemb or size = 0
 * NULL if malloc faile
 * Pointer to allocated memory location otherwise.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *mem;
	unsigned int i;

	/*validate input*/
	if (nmemb == 0 || size == 0)
		return (NULL);

	/*allocate memory of nmemb elements of size bytes*/
	mem = malloc(nmemb * sizeof(mem));
	/*return null is malloc fails*/
	if (mem == NULL)
		return (NULL);

	/*set the memory to zero*/
	for (i = 0; i < nmemb; i++)
		mem[i] = 0;

	/*return pointer to allocated memory*/
	return (mem);
}
