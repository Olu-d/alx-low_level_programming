#include"lists.h"

/**
 * pop_listint - A function to delete the head node of a linked list
 * @head: pointer to pointer to head for modifying the pointer to the head
 *
 * Return: the member value of the popped head
 */

int pop_listint(listint_t **head)
{
	int ret_val;
	listint_t *buffer;

	if (*head == NULL)
		return (0);

	buffer = (*head)->next;
	ret_val = (*head)->n;
	free(*head);
	*head = buffer;

	return (ret_val);
}
