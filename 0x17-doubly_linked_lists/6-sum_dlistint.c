#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data of a linked list
 * @head: the head
 * Return: the sum of all data
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *ptr;

	if (head == NULL)
		return (0);
	ptr = head;
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
