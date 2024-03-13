#include "search_algos.h"
#include <math.h>

/**
 * jump_search - perform jump search
 * @array: pointer
 * @size: the size
 * @value: search value
 * Return: index where value is located; -1 if value not found
 */

int jump_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (rec_help(array, size, sqrt(size), 0, value));
}

/**
 * rec_help - recursive implement of jump search
 * @array: array to search
 * @size: size of array
 * @step: jump increment
 * @idx: current index
 * @val: search value
 * Return: index where value is located; -1 if value not found
 */

int rec_help(int *array, size_t size, size_t step, size_t idx, int val)
{
	printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);

	if (((idx + step < size) && array[idx + step] < val))
		return (rec_help(array, size, step, idx + step, val));

	printf("Value found between indexes [%lu] and [%lu]\n", idx, (idx + step));
	return (subrec_help(array, size, idx + step, idx, val));
}

/**
 * subrec_help - recursive implement for recursive implement
 * @array: array to search
 * @size: size of array
 * @end: end of subarray
 * @idx: current index
 * @val: search value
 * Return: index where value is located; -1 if value not found
 */

int subrec_help(int *array, size_t size, size_t end, size_t idx, int val)
{
	if (idx >= size || idx > end || array[idx] > val)
		return (-1);

	printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);

	if (array[idx] == val)
		return (idx);
	else
		return (subrec_help(array, size, end, idx + 1, val));
}
