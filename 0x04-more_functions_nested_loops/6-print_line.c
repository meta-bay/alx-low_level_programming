#include <stdio.h>
#include "main.h"
/**
 * print_line - n times
 *
 * @n: para
 *
 * Return: 0
 */
void print_line(int n)
{
	while (n > 0)
	{
		putchar(95);
		n--;
	}
	putchar(10);
}

