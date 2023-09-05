#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates
 * @str: pointer to the string
 * Return: whatever
 */

char *_strdup(char *str)
{
	int i;
	int length;
	char *darr;

	if (str == NULL)
		return (NULL);

	length = 0;
	while (str[length] != '\0')
		length++;

	darr = malloc(length + 1);
	if (darr == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		darr[i] = str[i];
	return (darr);
}

