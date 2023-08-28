#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - the sum of the diagonals
 * @a: the pointer
 * @size: the size
 */

void print_diagsums(int *a, int size)
{
	int num;
	int num1;
	int i;

	num = 0;
	num1 = 0;
	for (i = 0; i < size; i++)
		num += a[i * size + i];
	for (i = size - 1; i >= 0; i--)
		num1 += a[i * size + (size - i - 1)];
	printf("%d, %d\n", num, num1);
}
