#include "main.h"
#include <stdlib.h>

/**
 * create_array - pointer to the array
 * @size: the size
 * @c: character
 * Return: idk
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0 )
	{
		return (NULL);
	}
	arr = (char *)malloc(size * sizeof(char));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++) 
	{
	       	arr[i] = c;
	}

	    return arr;
}

