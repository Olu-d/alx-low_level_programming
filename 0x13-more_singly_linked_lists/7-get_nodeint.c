#include"lists.h"

/**
 * get_nodeint_at_index - A function that returns the nth node of a linked list
 * @head: pointer to the head of the list
 * @index: index to return its node
 *
 * Return: The node at specified index, else return NULL.
 */


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

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

	return (head);
}

