#include <stdio.h>

/**
 * main - --->
 * Return: 0
 */
int main(void)
{
	char capl = 'A';
	char smll = 'a';

	while (smll <= 'z')
	{
		putchar(smll);
		smll++;
	}
	while (capl <= 'Z')
	{
		putchar(capl);
		capl++;
	}
	putchar('\n');
	return (0);
}
