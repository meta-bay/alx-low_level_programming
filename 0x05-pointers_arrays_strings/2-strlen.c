#include "main.h"

/**
 * _strlen - length of string
 * @s: string array
 * Return: the length
 */

int _strlen(char *s)
{
	int length;

	while (s[length] != '\0')
		length++;
	return (length);
}

