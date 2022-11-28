#include"lists.h"
#include<stdlib.h>
#include<string.h>

/**
 * add_node - a function that adds a new node at the beginning of a list_t list
 * @head: pointer to pointer of head of the linked list
 * @str: string to write to list
 * Return: pointer to new head
 */


list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int i = 0;

	new = malloc(sizeof(list_t));

	while (str[i] != '\0')
		i++;

	new->str = strdup(str);
	new->len = i;
	new->next = (*head);
	(*head) = new;

	return (new);
}

