#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - diagonals
 *
 * @n: para
 *
 * Return: 0
 */
void print_diagonal(int n)
{
	int length, spaces;

	if (n > 0)
	{
		for (length = 0; length < n; length++)
		{
			for (spaces = 0; spaces < length; spaces++)
			{
				putchar(' ');
			}

			putchar('\\');

			if (length == (n - 1))
			{
				continue;
			}
			putchar('\n');
		}
	}
	putchar('\n');
}
