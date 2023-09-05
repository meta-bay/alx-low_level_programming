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
	char *darr;

	if (str == NULL)
		return (NULL);
	darr = (char *)malloc(sizeof(char) * 3);

	for (i = 0; str[i] <= '\0'; i++)
		darr[i] = str[i];
	if (darr == NULL)
		return (NULL);
}

