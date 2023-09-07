#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - memalloc
 * @b: num of byte
 * Return: the pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}

