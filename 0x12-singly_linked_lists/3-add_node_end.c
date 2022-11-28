#include<stdlib.h>
#include<string.h>
#include"lists.h"

/**
 * add_node_end - A function that adds a new node at the end of a list
 * @head: Pointer to the head of the linked list
 * @str: string to add to new node of the linked list
 *
 * Return: pointer to new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *last = *head;
	int i = 0;

	if (new_node == NULL)
		return (NULL);

	/*calculate length of string*/
	while (str[i] != '\0')
		++i;

	/*insert into new_node*/
	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (last->next != NULL)
			last = last->next;
		last->next = new_node;
	}


	return (*head);

}


