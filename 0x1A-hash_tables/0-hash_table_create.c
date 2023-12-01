#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the array
 * Return: a pointer to the newly created hash table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *the_table = malloc(sizeof(hash_table_t));
	unsigned long int i;

	if (the_table == NULL)
	{
		return (NULL);
	}
	the_table->size = size;
	for (i = 0; i < size; i++)
	{
		the_table->array[i] = NULL;
	}
	return (the_table);
}
