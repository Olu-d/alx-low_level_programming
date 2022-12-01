#include"lists.h"

/**
 * free_listint2 - free a linked list and set head to NULL
 * @head: pointer to pointer to head of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return (NULL);

	while (*head != NULL) /* use tmp to track head */
	{
		tmp = *head;
		*head = (*head)->next; /* move to next as tmp frees current */
		free(tmp);
	}
}
