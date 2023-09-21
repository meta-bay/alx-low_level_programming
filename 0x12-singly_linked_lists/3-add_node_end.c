#include "lists.h"

/**
 * add_node_end - adds node at the end of the list
 * @head: pointer to the head pointer
 * @str: the string
 * Return: the address of the last element
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr;
	list_t *endNode = malloc(sizeof(size_t));

	ptr = *head;
	if (endNode == NULL)
		return (NULL);
	endNode->str = strdup(str);
	endNode->len = strlen(str);
	endNode->next = NULL;

	if (*head == NULL)
		*head = endNode;

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = endNode;
	return (endNode);
}

