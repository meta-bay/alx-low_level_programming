#include "main.h"

/**
 * puts2 - within interval of 2
 * @str: the string
 */

void puts2(char *str)
{
	int length;
	int i;

	length = 0;
	while (s[length] != '\0')
		length++;
	for (i = 0; i < length; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
