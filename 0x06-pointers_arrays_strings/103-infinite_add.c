#include "main.h"

/**
 * reverse_string - reverse
 * @str: integers
 */

void reverse_string(char *str)
{
	int i, j;
	char temp;

	i = 0;
	j = 0;
	while (str[i] != '\0')
		i++;
	i--;
	while (j < i)
	{
		temp = (str[j]);
		str[j] = str[i];
		str[i] = temp;
	}
}

/**
 * infinite_add - adds numbers
 * @n1: the first number
 * @n2: the second number
 * @r: the pointer
 * @size_r: the size
 * Return: r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int oflow = 0 digits = 0, i = 0, j = 0;
	int num1 = 0, num2 = 0, total_temp = 0;

	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || oflow == 1)
	{
		if (i < 0)
			num1 = 0;
		else
			num1 = n1[i] - '0';
		if (j < 0)
			num2 = 0;
		else
			num2 = n2[j] - '0';
		total_temp = num1 + num2 + oflow;
		if (total_temp >= 10)
			oflow = 1;
		else
			oflow = 0;
		if (digits >= (size_r - 1))
			return (0);
		r[digits] = (total_temp % 10) + '0';
		digits++;
		i--;
		j--;
	}
	if (digits == size_r)
		return (0);
	r[digits] = '\0';
	reverse_string(r);
	return (r);
