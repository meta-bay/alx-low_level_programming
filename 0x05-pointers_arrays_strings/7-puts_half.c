#include "main.h"

/**
 * puts_half - half of the string
 * @str: the string
 */

void puts_half(char *str)
{
	int length;
	int n;
	int i;

	length = 0;
	while (s[length] != '\0')
		length++;
	n = (length / 2);

	if ((length % 2) == 1)
		n = ((length + 1) / 2);

	for (i = n; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
