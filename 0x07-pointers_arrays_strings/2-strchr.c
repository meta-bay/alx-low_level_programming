#include "main.h"

/**
 * _strchr - finds char c
 * @s: the pointer
 * @c: the character
 * Return: s if found and NULL if not
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] >= '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (0);
}

