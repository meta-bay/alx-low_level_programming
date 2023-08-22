#include "main.h"

/**
 * puts2 - within interval of 2
 * @str: the string
 */

void puts2(char *str)
{
	_putchar(str[0]);
	while (*str != '\0')
		_putchar(str[0] + 2);
}
