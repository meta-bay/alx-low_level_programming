#include "lists.h"

/**
 * print_list - prints all the list
 * @h: the head of the list
 * Return: number of nodes
*/

size_t print_list(const list_t *h)
{
	int count = 0;
	const list_t *ptr = NULL;

	ptr = h;
	while (ptr != NULL)
	{
		count++;
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", ptr->len, ptr->str);
		ptr = ptr->next;
	}
	return (count);
}
