#include "main.h"

/**
 * _strspn - conjuction
 * @s: pointer
 * @accept: pointer
 * Return: n_bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int n_bytes;

	i = 0;
	n_byte = 0;
	while (s[i])
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				n_byte++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (n_byte);
		}
		i++;
	}
	return (n_byte);
}

