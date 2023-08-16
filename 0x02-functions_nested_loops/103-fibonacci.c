#include <stdio.h>

/**
 * main - sum of the even ones
 * Return: 0
 */

int main(void)
{
	int i;
	unsigned long int j, k, foll, sum;

	j = 1;
	k = 2;
	sum = 0;

	for (i = 1; i <= 33; ++i)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			sum = sum + j;
		}
		foll = j + k;
		j = k;
		k = foll;
	}
	printf("%lu\n", sum);
	return (0);
}

