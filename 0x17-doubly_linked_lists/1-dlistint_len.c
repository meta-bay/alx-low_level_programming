#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked
 * @h: the head
 * Return: number of elements
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t no_of_elements = 0;

	while (h != NULL)
	{
		h = h->next;
		no_of_elements++;
	}
	return (no_of_elements);
}
