#include <stdio.h>

/**
* main - exe
*
* Return: 0
*/

int main(void)
{
	int num;

	for (num = 48; num <= 57; ++num)
		putchar(num);

	for (num = 97; num <= 102; ++num)
		putchar(num);

	putchar(10);
	return (0);
}
