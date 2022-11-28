#include<stdio.h>
#include"lists.h"

/**
 * size_t - A function that prints the elements of a `list_t` list
 * 
 * Return: The number of nodes
 */


size_t print_list(const list_t *h)
{

	int i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] (nil)\n", i);
			h = h->next;
			i++;
			continue;
		}
		printf("[%d] %s\n",h->len, h->str);
		h = h->next;
		i++;
	}
	
	return (i);

}
