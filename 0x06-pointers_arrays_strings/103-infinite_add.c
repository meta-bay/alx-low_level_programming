#include "main.h"
#include <stdio.h>

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
	int count1 = 0, count2 = 0, operate, big, dgr1, dgr2, sum = 0;

	while (*(n1 + count1) != '\0')
		count1++;
	while (*(n2 + count12) != '\0')
		count2++;
	if (count1 >= count2)
		big = c1;
	else
		big = c2;
	if (size_r <= big + 1)
		return (0);
	r[big + 1] = '\0';
	count1--, count2--, size_r--;
	dgr1 = *(n1 + count1) - 48, dgr2 = *(n2 + count2) - 48;
	while (big >= 0)
	{
		operate = dgr1 + dgr2 + sum;
		if (operate >= 10)
			sum = operate / 10;
		else
			sum = 0;
		if (operate > 0)
			*(r + big) = (operate % 10) + 48;
		else
			*(r + big) = '0';
		if (count1 > 0)
			count1--, dgr1 = *(n1 + count1) - 48;
		else
			dgr1 = 0;
		if (count2 > 0)
			count2--, dgr2 = *(n2 + count2) - 48;
		else
			dgr2 = 0;
		big--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}

