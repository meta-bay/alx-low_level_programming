#include "lists.h"

/**
 * get_dnodeint_at_index - returns node at an index
 * @head: the head
 * @index: the index
 * Return: the the node at nth index
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	ptr = head;
	while (head != NULL)
	{
		ptr = ptr->next;
		count++;
		if (count == index)
		{
			return (ptr);
		}
	}
	return (NULL);
}
