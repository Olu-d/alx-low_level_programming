#include"lists.h"

/**
 * delete_nodeint_at_index: A function that deletes the node at the 
 * passed index of a linked list
 * @head: the linked list
 * @index: index to delete at
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	unsigned int prev_index = (index - 1);
	listint_t *temp = *head;

	if (temp == NULL)
		return (-1);

	if (index == 0)
	{
		*head = temp->next;
		return (1);
	}

	while (temp)
	{
		if (count == prev_index)
		{
			temp->next = temp->next->next;
			return (1);
		}
		count++;
		temp = temp->next;
	}
	free(temp);
	return (1);
}
