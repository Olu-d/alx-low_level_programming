#include"lists.h"
#include<stdlib.h>

/**
 * list_len - a function that returns the number of elements in a linked
 * list_t list
 * @h: pointer to head of linked list
 *
 * Return: number of elements in the linked list
 */

size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}
