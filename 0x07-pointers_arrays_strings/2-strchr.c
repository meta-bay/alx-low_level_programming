#include "main.h"

#define NULL ((void *)0)

/**
 * _strchr - finds char c
 * @s: the pointer
 * @c: the character
 * Return: s if found and NULL if not
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
	}
	return (NULL);
}

