#include"lists.h"

/**
 * sum_listint - A function that sums the data (n) of a linked list.
 * @head: the linked list
 *
 * Return: sum of integer memebers else return 0
 */


int sum_listint(listint_t *head)
{

	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
