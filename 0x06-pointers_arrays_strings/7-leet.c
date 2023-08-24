#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: the string
 * Return: encoded string
 */

char *leet(char *str)
{
	int i, j;
	char arr1[] = "aAeEoOtTlL";
	char arr2[] = "4433007711";

	j = 0;
	while (str[j] != '\0')
	{
		for (i = 0; i < 10; i++)
		{
			if (str[j] == arr1[i])
				str[j] = arr2[i];
		}
		j++;
	}
	return (str);
}

