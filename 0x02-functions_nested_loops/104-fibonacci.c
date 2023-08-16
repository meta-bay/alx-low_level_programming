#include <stdio.h>

/**
 * main - fibonacci 98
 * Return: 0
 */

int main(void)
{
	unsigned long int i;
	unsigned long int fir = 1;
	unsigned long int sec = 2;
	unsigned long int b = 1000000000;
	unsigned long int fir1;
	unsigned long int fir2;
	unsigned long int sec1;
	unsigned long int sec2;

	printf("%lu", fir);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", sec);
		sec += fir;
		fir = sec - fir;
	}

	fir1 = (fir / b);
	fir2 = (fir % b);
	sec1 = (sec / b);
	sec2 = (sec % b);

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", sec1 + (sec2 / b));
		printf("%lu", sec2 % b);
		sec1 = sec1 + fir1;
		fir1 = sec1 - fir1;
		sec2 = sec2 + fir2;
		fir2 = sec2 - fir2;
	}
	printf("\n");
	return (0);
}

