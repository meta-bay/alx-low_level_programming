#include "hash_tables.h"

/**
 * key_index - a function that gives you the index of a key.
 * @key: the key
 * @size: the size of the array of the hash table
 * Return: the index to where the key:value should stored
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_it, hashed;

	hash_it = hash_djb2(key);
	hashed = hash_it % size;
	return (hashed);
}
