#include "main.h"

/**
 *swap_int - swaps the integers
 *@a: integer 1
 *@b: integer 2
 *Return: void
 */

void swap_int(int *a, int *b)
{
	int n;
	
	n = *a;
	*a = *b;
	*b = n;
}

