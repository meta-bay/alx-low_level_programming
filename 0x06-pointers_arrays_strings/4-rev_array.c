#include "main.h"

/**
 * reverse_array - reverses the array
 * @a: pointer to array
 * @n: number of elements
 */

void reverse_array(int *a, int n)
{
	int i;

	i = (n - 1);
	while (i >= 0)
	{
		_putchar(a[i] + ', ');
		i--;
	}
	_putchar('\n');
}

