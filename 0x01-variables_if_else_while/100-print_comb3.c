#include <stdio.h>

/**
 * main - ext
 *
 * Return: 0
 */
int main(void)
{
	int c, comb2;

	for (c = 48; c <= 56; c++)
	{
		for (comb2 = c + 1; comb2 <= 57; comb2++)
		{
			putchar(c);
			putchar(comb2);

			if (c != 56 || comb2 != 57)
			{
				putchar(44);
				putchar(32);
			}
		}
	}

	putchar(10);
	return (0);
}
