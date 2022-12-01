#include"lists.h"

/**
 * free_listint2 - free a linked list and set head to NULL
 * @head: pointer to pointer to head of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}

	*head = NULL;
}
