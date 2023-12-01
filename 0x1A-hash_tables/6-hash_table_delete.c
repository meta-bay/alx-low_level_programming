#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: the hash table
*/

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp, *temp1;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			temp = ht->array[i];
			while (temp)
			{
				temp1 = temp->next;
				free(temp->key);
				free(temp->value);
				free(temp);
				temp = temp1;
			}
		}
	}
	free(ht->array);
	free(ht);
}
