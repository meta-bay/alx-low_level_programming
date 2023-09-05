#include "main.h"

/**
 * create_array - pointer to the array
 * @size: the size
 * @c: character
 * Return: idk
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0 )
	{
		return ('\0');
	}
	char *arr = (char *)malloc(size * sizeof(char));
	if (arr == '\0')
		return ('\0');
	for (unsigned int i = 0; i < size; i++) 
	{
	       	arr[i] = c;
	}

	    return arr;
}

