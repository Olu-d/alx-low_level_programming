#include"lists.h"

/**
 * add_nodeint - a function that adds a node to the head of a linked list
 * @head: pointer to the head of the linked list.
 * @n: integer to insert into new nodes.
 *
 * Return: Pointer to the new node.
 */



listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
