#include "main.h"

/**
 * reverse_array - reverses the array
 * @a: pointer to array
 * @n: number of elements
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;

	i = 0;
	while (i < n--)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		i++;
	}
}

