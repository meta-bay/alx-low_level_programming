#include "lists.h"

/**
 * sum_listint - sum of all nodes data
 * @head: pointer
 * Return:the sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
