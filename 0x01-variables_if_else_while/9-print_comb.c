#include <stdio.h>

/**
* main - exe
*
* Return: 0
*/

int main(void)
{
	int comb;

	for (comb = 48; comb <= 57; comb++)
	{
		putchar(comb);

		if (comb <= 56)
		{
			putchar(44);
			putchar(32);
		}
	}

	putchar(10);
	return (0);
}
