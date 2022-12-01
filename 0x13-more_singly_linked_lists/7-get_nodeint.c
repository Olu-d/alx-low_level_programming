#include"lists.h"

/**
 * get_nodeint_at_index - A function that returns the nth node of a linked list
 * @head: pointer to the head of the list
 * @index: index to return its node
 *
 * Return: The node at specified index, else return NULL.
 */

int get_length(listint_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;
	unsigned int count = 0;

	n = get_length(head);

	if (index > n)
	{
		printf("The index is greated than n");
		return (NULL);
	}
	else
	{
	while (head)
	{
		if (count == index)
		{
			return (head);
		}
		else
		{
			count++;
		}

		head = head->next;
	}
	}

	return (head);
}

