#include "lists.h"

/**
 * add_nodeint_end - a function to add a node at the end of a linked list
 * @head: pointer to head of linked list
 * @n: integer to insert into new node
 *
 * Return: pointer to head
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/*create new node*/
	listint_t *end_node = malloc(sizeof(listint_t));
	/*create iterator and assign to same position as head*/
	listint_t *looper = *head;

	/*check if malloc failed*/
	if (end_node == NULL)
		return (NULL);

	end_node->n = n;
	end_node->next = NULL; /* the end node must always be null */

	/* iterate to place the end node */
	if (*head == NULL)
	{
		*head = end_node;
	}
	else
	{
		while (looper->next != NULL)
			looper = looper->next;
		looper->next = end_node;
	}
	return (*head);
}

