#include "main.h"

/**
 * puts2 - within interval of 2
 * @str: the string
 */

void puts2(char *str)
{
	int i;

	i = 0;
	_putchar(str[0]);
	while (str[i] != '\0')
		_putchar(str[i] + 2);
	_putchar('\n');
}
