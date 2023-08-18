#include <stdio.h>

/**
 * main - largest prime
 * Return: returns 0
 */

int main(void)
{
	long num1 = 612852475143;
	int i;

	while (i++ < num1 / 2)
	{
		if (num1 % i == 0)
		{
			num1 /= 2;
			continue;
		}
		for (i = 3; i < num1 / 2; i += 2)
		{
			if (num1 % i == 0)
			num1 /= i;
		}
	}
	printf("%ld\n", num1);
	return (0);
}

