#include "lists.h"

/**
 * free_list - Frees the list
 * @head: A pointer to the head the list
 */

void free_list(list_t *head)
{
	list_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr->str);
		free(ptr);
	}
}

