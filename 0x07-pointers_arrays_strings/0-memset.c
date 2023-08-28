#include "main.h"

/**
 * _memset - sets it to b
 * @s: the pointer
 * @b: the byte
 * @n: number of bytes
 * Return: pointer to the memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

