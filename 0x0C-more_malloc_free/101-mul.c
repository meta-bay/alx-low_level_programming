#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - if it is digit
 * @s: str
 * Return: 1 or 0
 */

int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - len
 * @s: str
 * Return: len of str
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * errors - error handler
 */

void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - product
 * @argc: num of args
 * @argv: arr of args
 * Return: 01
 */

int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, len, i, carr, digit1, digit2, *result, arb = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (i = 0; i <= len1 + len2; i++)
		result[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = s1[len1] - '0';
		carr = 0;
		for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
		{
			digit2 = s2[len2] - '0';
			carr += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = carr % 10;
			carr /= 10;
		}
		if (carr > 0)
			result[len1 + len2 + 1] += carr;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (result[i])
			arb = 1;
		if (arb)
			_putchar(result[i] + '0');
	}
	if (!arb)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
