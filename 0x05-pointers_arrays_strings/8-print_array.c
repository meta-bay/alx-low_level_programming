#include "main.h"

/**
 * print_array - lists an array
 * @a: the array
 * @n: length
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
		printf("%d, ", a[i]);
	if (i == (n - 1))
		printf("%d", a[i]);
	printf("\n");
}
