#include "search_algos.h"

/**
 * advanced_binary_recur - Searches recursively for a value in a sorted
 * array of integers using binary search.
 * @array: pointer to the array
 * @left: the left
 * @right: the right
 * @value: The value to search for
 * Return: index where the value is located.
 */

int advanced_binary_recur(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = left + (right - left) / 2;
	if (array[i] == value && (i == left || array[i - 1] != value))
		return (i);
	if (array[i] >= value)
		return (advanced_binary_recur(array, left, i, value));
	return (advanced_binary_recur(array, i + 1, right, value));
}

/**
 * advanced_binary - Searches for a value in a sorted array
 * of integers using advanced binary search.
 * @array: A pointer to the array
 * @size: the size
 * @value: The value to search for
 * Return: first index where the value is located
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recur(array, 0, size - 1, value));
}
