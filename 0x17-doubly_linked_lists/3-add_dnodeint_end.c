#include "lists.h"

/**
 * add_dnodeint_end - adds node at the end
 * @head: the head
 * @n: the data
 * Return: he address of the new element, or NULL if it failed
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr_to_last;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->next = NULL;
	new_node->n = n;
	new_node->prev = NULL;
	if (*head == NULL)
	{
		(*head) = new_node;
		return (*head);
	}
	ptr_to_last = (*head);
	while (ptr_to_last->next != NULL)
	{
		ptr_to_last = ptr_to_last->next;
	}
	ptr_to_last->next = new_node;
	new_node->prev = ptr_to_last;
	return (*head);
}
