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
	while (str[i] != '\0')
	{
		while (str[i] < 'a')
			i++;
		if (str[i--] == " " ||
			 str[i--] == "\t" ||
			 str[i--] == "\n" ||
			 str[i--] == "," ||
			 i == 0 ||
			 str[i--] == ";" ||
			 str[i--] == "." ||
			 str[i--] == "!" ||
			 str[i--] == "?" ||
			 str[i--] == '"' ||
			 str[i--] == "(" ||
			 str[i--] == ")" ||
			 str[i--] == "{" ||
			 str[i--] == "}" ||)
			str[i] -= 32;
		i++;
	}
	return (str);
}

