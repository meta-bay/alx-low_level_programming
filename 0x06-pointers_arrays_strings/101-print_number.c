#include "main.h"

/**
 * print_number - prints a number
 * @n: the number
 */

void print_number(int n)
{
	unsigned int c, mr, dig;

	if (n < 0)
	{
		_putchar(45);
		mr = n * -1;
	}
	else
		mr = n;
	dig = mr;
	c = 1;
	while (dig > 9)
	{
		dig /= 10;
		c *= 10;
	}
	for (; c >= 1; c /= 10)
		_putchar(((mr / c) % 10) + 48);
}

