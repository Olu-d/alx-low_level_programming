#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int **alloc_grid(int width, int height)
{

	int i, j; 

	/*create a pointer to pointer of an array of ints*/
	/*this represents the row level pointers i.e. vertical*/
	int** arr = malloc(height * sizeof(int*));
	/*check that malloc didn't fail*/
	if (arr == NULL)
		return (NULL);

	/*this represents the width of the elements i.e. horizontal*/
	for (i = 0; i < height; i++)
	        arr[i] = malloc(width * sizeof(int*));
	/*check that malloc didn't fail*/

	if (width <= 0 || height <= 0)
		return (NULL);

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			arr[i][j] = 0;


	return (arr);
}

