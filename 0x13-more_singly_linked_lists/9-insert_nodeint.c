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

/*
 *listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
 *{
 *
 *       listint_t *new_node = malloc(sizeof(listint_t));
 *       unsigned int count = 0;
 *       unsigned int prev_idx = (idx - 1);
 *       listint_t *traverser = *head;
 *
 *       if (head == NULL)
 *              return (NULL);
 *
 *       if (new_node == NULL)
 *              return (NULL);
 *
 *       new_node->n = n;
 *       new_node->next = NULL;
 *
 *       if (idx == 0)
 *       {
 *              new_node->next = traverser;
 *              free(*head);
 *              *head = new_node;
 *              return (traverser);
 *       }
 *       
 *       [>guage the length of the list<]
 *       while (count < prev_idx)
 *       {
 *              traverser = traverser->next;
 *              count++;
 *              
 *              if (traverser == NULL) [>if list is outside range at index<]
 *                     return (NULL);
 *
 *       }
 *
 *       [> insert list <]
 *       new_node->next = traverser->next;
 *       traverser->next = new_node;
 *       return (traverser);
 *}
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

	unsigned int i = 0;
	listint_t *new_node, *tmp;

	/* account for empty pointer */
	if (head == NULL)
		return (NULL);

	/* malloc and set values for new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	/* account for idx 0 */
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	/* iterate to 1 before nth index to insert */
	tmp = *head;
	while (i < (idx - 1))
	{
		tmp = tmp->next;
		i++;

		if (tmp == NULL) /* account for idx out of range */
		{
			free(new_node);
			return (NULL);
		}
	}

	/* link into list */
	new_node->next = tmp->next;
	tmp->next = new_node;
	return (new_node);
}
