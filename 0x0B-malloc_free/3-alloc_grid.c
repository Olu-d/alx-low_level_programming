#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int **alloc_grid(int width, int height)
{

	int i, j;
	int **arr;

	/*validate input. Remember input validation should come first*/
	if (width <= 0 || height <= 0)
		return (NULL);

	/*create a pointer to pointer of an array of ints*/
	/*this represents the row level pointers i.e. vertical*/
	arr = malloc(height * sizeof(int *));
	/*check that malloc didn't fail*/
	if (arr == NULL)
		return (NULL);

	/*this represents the width of the elements i.e. horizontal*/
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));
	/*check that malloc didn't fail*/
		if (arr[i] == NULL)
		{
			for (i = 0; i < height; i++)
				free(arr[i]);
			free(arr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			arr[i][j] = 0;

	}

	return (arr);
}

