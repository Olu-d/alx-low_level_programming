#include "lists.h"

/**
 * free_listint - A function that frees a linked list
 * @head: pointer to the head of the linked list
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head; 
		head = head->next;
		free(tmp);
	}
}
