#include "main.h"

/**
 * _memcpy - copies memory address
 * @dest: the destination
 * @src: The source
 * @n: number of bytes
 * Return: returns the destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}

