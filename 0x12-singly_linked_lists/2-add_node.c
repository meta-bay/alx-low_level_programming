#include "lists.h"

/**
 * add_node - adds a node at the beginning
 * @head: pointer to pointer head
 * @str: the string
 * Return: address of the new node
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t));

	ptr->str = strdup(str);
	ptr->next = NULL;

	if (ptr == NULL)
		return (NULL);
	ptr->len = strlen(str);
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}

