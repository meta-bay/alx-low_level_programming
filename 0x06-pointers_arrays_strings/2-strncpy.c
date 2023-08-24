#include "main.h"

/**
 * _strncpy - copies string
 * @dest: destination
 * @src: source
 * @n: no of string to be copied
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[0] != '\0' && i < n)
	{
		dest[0] = src[0];
		i++;
	}
	dest[n] = '\0';
	return (dest);
}

