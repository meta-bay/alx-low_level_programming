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
	int j;
	int length1, length2;
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
	i = 0;
	while (s1[i] != '\0')
	{
		carr[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		carr[i] = s2[j];
		i++;
		j++;
	}

	carr[i] = '\0';
	return (carr);
}


