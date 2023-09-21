#include "lists.h"

/**
 * list_len - elements of the node
 * @h: the head
 * Return: number of elements
*/

size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *ptr;

	ptr = h;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
