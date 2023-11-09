#include "lists.h"

/**
 * insert_dnodeint_at_index - insersts node at index idx
 * @h: the head
 * @idx: the index
 * @n: the data
 * Return: the address of the new node, or NULL if it failed
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t)), *ptr_to_idx;
	unsigned int count = 0;

	if (new_node == NULL)
		return (NULL);
	new_node->next = NULL;
	new_node->n = n;
	new_node->prev = NULL;
	if (idx == 0)
	{
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	ptr_to_idx = *h;
	while (ptr_to_idx != NULL && count < idx - 1)
	{
		ptr_to_idx = ptr_to_idx->next;
		count++;
	}

	if (count == idx - 1 && ptr_to_idx != NULL)
	{
		new_node->next = ptr_to_idx->next;
		if (ptr_to_idx->next != NULL)
			ptr_to_idx->next->prev = new_node;
		new_node->prev = ptr_to_idx;
		ptr_to_idx->next = new_node;
		return (new_node);
	}
	free(new_node);
	return (NULL);
}
