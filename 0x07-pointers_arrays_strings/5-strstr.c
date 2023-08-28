#include "main.h"

/**
 * _strstr - string func
 * @haystack: param1
 * @needle: param2
 * Return: one of the values
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, flag = 0;

	if (*needle == '\0')
	{
		return (haystack);
	}
	for (; haystack[i] != '\0'; i++)
	{
		int j = 0;

		if (haystack[i] == needle[0])
		{
			while (needle[j] != '\0')
			{
				if (haystack[i + j] != needle[j])
				{
					flag = 0;
					break;
				}
				else
					flag = 1;
				j++;
			}
			if (flag)
				break;
		}
	}
	if (flag)
		return (haystack + i);
	else
		return (0);
}

