#include "hash_tables.h"

/**
 * shash_table_create - creates a hash table
 * @size: the size
 * Return: pointer to the newly created table
*/

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;
	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}

/**
 * shash_table_set - adds an element to the sorted hash table
 * @ht: the sorted hash table
 * @key: the key
 * @value: the value
 * Return: 1 if it succeeded, 0 otherwise
*/

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node, *temp;
	char *the_value;
	unsigned long int index;

	if (!ht || !key || !value)
		return (0);
	the_value = strdup(value);
	if (!the_value)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->shead;
	while (temp && strcmp(temp->key, key) != 0)
		temp = temp->snext;
	if (temp)
	{
		free(temp->value);
		temp->value = the_value;
		return (1);
	}
	new_node = malloc(sizeof(shash_node_t));
	if (!new_node)
	{
		free(the_value);
		return (0);
	}
	new_node->key = strdup(key);
	if (!new_node->key)
	{
		free(the_value);
		free(new_node);
		return (0);
	}

	new_node->value = the_value;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	shash_table_insert(ht, new_node);
	return (1);
}

/**
 * shash_table_insert - inserts the node
 * @ht: the sorted hash table
 * @new_node: the node
*/

void shash_table_insert(shash_table_t *ht, shash_node_t *new_node)
{
	shash_node_t *temp;

	if (!ht || !new_node)
		return;

	if (!ht->shead)
	{
		new_node->sprev = NULL;
		new_node->snext = NULL;
		ht->shead = new_node;
		ht->stail = new_node;
		return;
	}

	if (strcmp(ht->shead->key, new_node->key) > 0)
	{
		new_node->sprev = NULL;
		new_node->snext = ht->shead;
		ht->shead->sprev = new_node;
		ht->shead = new_node;
		return;
	}

	temp = ht->shead;
	while (temp->snext != NULL && strcmp(temp->snext->key, new_node->key) < 0)
		temp = temp->snext;

	new_node->sprev = temp;
	new_node->snext = temp->snext;

	if (temp->snext == NULL)
		ht->stail = new_node;
	else
		temp->snext->sprev = new_node;
	temp->snext = new_node;
}

/**
 * shash_table_get - retrieves the value
 * @ht: the sorted hash table
 * @key: the key
 * Return: the value if found, NULL if not
*/

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *temp;
	unsigned long int index;

	if (ht == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	temp = ht->shead;
	while (temp != NULL && strcmp(temp->key, key) != 0)
		temp = temp->snext;

	if (temp == NULL)
		return (NULL);
	else
		return (temp->value);
}

/**
 * shash_table_print - prints a sorted hash table
 * @ht: the sorted hash table
*/

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp;

	if (ht == NULL)
		return;

	temp = ht->shead;
	printf("{");
	while (temp != NULL)
	{
		printf("'%s': '%s'", temp->key, temp->value);
		temp = temp->snext;
		if (temp != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints a sorted hash table in reverse
 * @ht: the sorted hash table
*/

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *temp;

	if (ht == NULL)
		return;

	temp = ht->stail;
	printf("{");
	while (temp != NULL)
	{
		printf("'%s': '%s'", temp->key, temp->value);
		temp = temp->sprev;
		if (temp != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes the sorted hash table
 * @ht: the hash table
*/

void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *temp, *temp1;

	if (ht == NULL)
		return;

	temp = ht->shead;
	while (temp)
	{
		temp1 = temp->snext;
		free(temp->key);
		free(temp->value);
		free(temp);
		temp = temp1;
	}

	free(ht->array);
	free(ht);
}
