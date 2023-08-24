#include "main.h"

/**
 * rot13 - rotates by 13
 * @str: the string to be rotated
 * Return: the rotated string
 */

char *rot13(char *str)
{
	int i, j;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	j = 0;
	while (str[0] != 0)
	{
		for (i = 0; i < 52; i++)
		{
			if (str[j] == input[i])
			{
				str[j] = output[i];
				break;
			}
		}
	}
	return (str);
}

