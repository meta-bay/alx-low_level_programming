#include <stdio.h>

/**
 * main - begin
 * Return: 0
 */
int main(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		if (alph != 'q' && alph != 'e')
			putchar(alph);
		alph++;
	}
	putchar('\n');
	return (0);
}
