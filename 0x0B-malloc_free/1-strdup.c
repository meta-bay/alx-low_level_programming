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

	length = 0;
	while (str[length] != '\0')
		length++;

	if (str == NULL)
		return (NULL);
	darr = (char *)malloc(sizeof(char) * (length + 1));
	if (darr == NULL)
		return (NULL);
	for (i = 0; i <= length; i++)
		darr[i] = str[i];
	return (darr);
}

