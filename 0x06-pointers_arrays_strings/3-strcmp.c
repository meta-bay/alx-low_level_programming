#include "main.h"

/**
 * _strcmp - compares strings
 * @s1: var 1
 * @s2: var 2
 * Return: the difference
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

