#include"lists.h"

/**
 * delete_nodeint_at_index - A function that deletes the node at the
 * passed index of a linked list
 * @head: the linked list
 * @index: index to delete at
 *
 * Return: -1 if it fails, 1 if it succeeds.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *deleted_value;
	unsigned int count = 0;
	unsigned int prev_index = (index - 1);
	listint_t *temp = *head;

	if (temp == NULL)
		return (-1);

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	while (temp)
	{
		if (count == prev_index)
		{
			if (temp->next == NULL)
				return (-1);
			deleted_value = temp->next;
			temp->next = temp->next->next;
			free(deleted_value);
			return (1);
		}
		count++;
		temp = temp->next;
	}
	free(temp);
	return (1);
}
