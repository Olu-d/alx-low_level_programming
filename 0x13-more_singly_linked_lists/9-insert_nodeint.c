#include"lists.h"

/**
 * insert_nodeint_at_index - A function that inserts a new node at a given
 * position.
 * @head: the linked list
 * @idx: the index to insert at
 * @n: integer to insert
 *
 * Return: address of new node or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

	listint_t *new_node = malloc(sizeof(listint_t));
	unsigned int count = 0;
	unsigned int prev_idx = (idx - 1);
	listint_t *traverser = *head;

	if (head == NULL)
		return (NULL);

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (traverser == NULL)
	{
		traverser = new_node;
		return (traverser);
	}

	while (traverser != NULL)
	{
		if (idx == 0)
		{
			new_node->next = traverser;
			free(*head);
			*head = new_node;
			return (traverser);
		}
		else if (idx > 0 && count == prev_idx)
		{
			new_node->next = traverser->next;
			traverser->next = new_node;
		}
		count++;
		traverser = traverser->next;
	}
	return (traverser);
}
