#include <stdio.h>

/**
 * main - fibonacci
 * Return: 0
 */

int main(void)
{
	int fbnums;
	unsigned long num1 = 0, num2 = 1, sum;

	for (fbnums = 0; fbnums < 50; fbnums++)
	{
		sum = num1 + num2;
		printf("%lu", sum);

		num1 = num2;
		num2 = sum;

		if (fbnums == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}

