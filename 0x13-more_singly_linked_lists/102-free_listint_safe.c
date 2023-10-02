#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node inthe list
 * Return: number of elements in the freed list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t length = 0;
	int nodeDist;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		nodeDist = *h - (*h)->next;
		if (nodeDist > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			length++;
		}
		else
		{
			free(*h);
			*h = NULL;
			length++;
			break;
		}
	}

	*h = NULL;

	return (length);
}
