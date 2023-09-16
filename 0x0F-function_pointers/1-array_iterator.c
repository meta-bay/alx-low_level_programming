#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - each array
 * @array: array
 * @size: size
 * @action: pointer to reg hex
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
