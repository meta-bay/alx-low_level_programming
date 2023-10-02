#include "lists.h"

size_t loopin_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * loopin_listint_len - Calculates the number of unique nodes in a linked list.
 * @head: A pointer to the head of the list.
 * Return: The number of unique nodes, or 0 if there is no loop.
 */

size_t loopin_listint_len(const listint_t *head)
{
	const listint_t *slow_ptr, *fast_ptr;
	size_t unique_nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	slow_ptr = head->next;
	fast_ptr = (head->next)->next;

	while (fast_ptr)
	{
		if (slow_ptr == fast_ptr)
		{
			slow_ptr = head;
			while (slow_ptr != fast_ptr)
			{
				unique_nodes++;
				slow_ptr = slow_ptr->next;
				fast_ptr = fast_ptr->next;
			}

			slow_ptr = slow_ptr->next;
			while (slow_ptr != fast_ptr)
			{
				unique_nodes++;
				slow_ptr = slow_ptr->next;
			}

			return (unique_nodes);
		}

		slow_ptr = slow_ptr->next;
		fast_ptr = (fast_ptr->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a the list safely.
 * @head: A pointer to the head of the list.
 * Return: The number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes_count, index = 0;

	nodes_count = loopin_listint_len(head);

	if (nodes_count == 0)
	{
		for (; head != NULL; nodes_count++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < nodes_count; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes_count);
}
