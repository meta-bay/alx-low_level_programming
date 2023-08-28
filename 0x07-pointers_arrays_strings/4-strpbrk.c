#include "main.h"

/**
 * _strpbrk - conjuction
 * @s: pointer
 * @accept: pointer
 * Return: s or '\0'
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	i = 0;
	while (s[i])
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				return (s);
			}
		}
		i++;
	}
	return ('\0');
}

