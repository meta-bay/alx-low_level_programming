#include "lists.h"

/**
 * print_listint - prints the data
 * @h: pointer to the header
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	listint_t *ptr;
	size_t count;

	ptr = h;
	while (ptr != NULL)
	{
		count++;
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
	return (count);
}

