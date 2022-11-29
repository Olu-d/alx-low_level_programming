#include<stdlib.h>
#include"lists.h"

/**
 * free_list - free linked list
 * @head: pointer to head of linked list
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}

