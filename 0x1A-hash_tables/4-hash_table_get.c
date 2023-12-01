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

	if (ht == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] != NULL)
	{
		if (strcmp(ht->array[index]->key, key) == 0)
		{
			the_value = ht->array[index]->value;
		}
	}
	return (the_value);
}
