#include "main.h"

/**
 * cap_string - capitalize the letter of a word
 * @str: the string
 * Return: the string
 */

char *cap_string(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		while (!(str[i] >= 'a' && str[i] <= 'z'))
			i++;

		if (i == 0 ||
			str[i - 1] == ' ' ||
			 str[i - 1] == '\t' ||
			 str[i - 1] == '\n' ||
			 str[i - 1] == ',' ||
			 str[i - 1] == ';' ||
			 str[i - 1] == '.' ||
			 str[i - 1] == '!' ||
			 str[i - 1] == '?' ||
			 str[i - 1] == '"' ||
			 str[i - 1] == '(' ||
			 str[i - 1] == ')' ||
			 str[i - 1] == '{' ||
			 str[i - 1] == '}' ||)
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

