#include"lists.h"

/**
 * listint_len - list the length of a linked list
 * @h: pointer to head of linked list
 *
 * Return: length of the linked list
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;
	const listint_t *i;

	for (i = h; i != NULL; i = i->next)
	{
		h = h->next;
		count++;
	}

	return (count);
}
