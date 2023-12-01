#include "hash_tables.h"

/**
 * hash_table_get -  retrieves a value associated with a key.
 * @ht: the hash table
 * @key: the key
 * Return: the value if found, NULL if not
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	char *the_value = NULL;
	hash_node_t *temp;

	if (ht == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] != NULL)
	{
		temp = ht->array[index];
		while (temp != NULL)
		{
			if (strcmp(temp->key, key) == 0)
				the_value = temp->value;
			temp = temp->next;
		}
	}
	return (the_value);
}
