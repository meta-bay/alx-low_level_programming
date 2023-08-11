#include <stdio.h>

/**
 * main - exe
 *
 * Return: 0
 */
int main(void)
{
	int c, comb2, comb3;

	for (c = 48; c <= 55; c++)
	{
		for (comb2 = c + 1; comb2 <= 56; comb2++)
		{
			for (comb3 = comb2 + 1; comb3 <= 57; comb3++)
			{
				putchar(c);
				putchar(comb2);
				putchar(comb3);

				if (c != 55 || comb2 != 56 || comb3 != 57)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}

	putchar(10);
	return (0);
}
