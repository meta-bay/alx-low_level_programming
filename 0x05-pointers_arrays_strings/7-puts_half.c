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
	while (str[length] != '\0')
		length++;
	n = (length / 2);

	if ((length % 2) == 1)
		n = ((length + 1) / 2);
	i = n;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++
	}
	_putchar('\n');
}
