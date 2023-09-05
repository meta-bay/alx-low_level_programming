#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates
 * @s1: parar
 * @s2: para
 * Return: Whatever
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int length1, length2, j;
	char *carr;

	while (s1[length1] != '\0')
		length1++;
	while (s2[length2] != '\0')
		length2++;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	carr = malloc((length1 + length2) + 1);
	if (carr == NULL)
		return (NULL);
	while (s1 != '\0')
	{
		*carr = *s1;
		s1++;
		carr++;
	}
	j = length1 - 1;
	for (i = 0; i < length2; i++)
		carr[j + i] = s2[i];
	carr[j + i + 1] = '\0';
	return (carr);
}


