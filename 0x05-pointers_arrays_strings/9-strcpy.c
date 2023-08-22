#include "main.h"

/**
 * _strcpy - coppies an array
 * @dest: pasted
 * @src: copied
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int length;
	int i;

	length = 0;
	while (src[length] != '\0')
		length++;
	for (i = 0; i < length; i++)
		dest[i] = src[i];
	dest[length] = '\0';
	return (dest);
}
