#include "lists.h"

/**
 * free_dlistint - frees a list
 * @head: the head
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
