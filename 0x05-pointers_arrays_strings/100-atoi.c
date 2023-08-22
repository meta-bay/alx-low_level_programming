#include "main.h"

/**
 * _atoi - converts into integer
 * @s : the string
 * Return: Success
 */

int _atoi(char *s)
{
	int length, i, num, a, b, c;


	length = 0;
	i = 0;
	num = 0;
	a = 0;
	b = 0;
	c = 0;
	while (s[length] != '\0')
		length++;
	while (i < length && c == 0)
	{
		if (s[i] == '-')
			++b;

		if (s[i] >= '0' && s[i] <= '9')
		{
			num = s[i] - '0';
			if (b % 2)
				num = -num;
			a = a * 10 + num;
			c = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			c = 0;
		}
		i++;
	}
	if (c == 0)
		return (0);
	return (n);
}


