#include "main.h"

/**
 * print_rev - reverse of string
 * @s: the string to be reversed
 */

void print_rev(char *s)
{
	int length;
	int i;

	length = 0;
	while (s[length] != '\0')
		length++;
	for (i = length - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}

