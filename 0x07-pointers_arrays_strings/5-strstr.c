#include "main.h"

/**
 * _strstr - the func
 * @haystack: pointer
 * @needle: pointer
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *i = haystck;
		char *j = needle;

		while (*j && *i == *j)
		{
			i++;
			j++;
		}
		if (*j == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}

