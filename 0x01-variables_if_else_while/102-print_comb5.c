#include <stdio.h>

/**
 * main - exe
 *
 * Return: 0
 */
int main(void)
{
	int c, comb2;

	for (c = 0; c <= 98; c++)
	{
		for (comb2 = c + 1; comb2 <= 99; comb2++)
		{
			putchar('0' + c / 10);
			putchar('0' + c % 10);
			putchar(32);
			putchar('0' + comb2 / 10);
			putchar('0' + comb2 % 10);

			if (c / 10 != 9 || c % 10 != 8)
			{
				putchar(44);
				putchar(32);
			}
		}
	}

	putchar(10);
	return (0);
}
