#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - ext point
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int bs;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	bs = n % 10;
	if (bs > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, bs);
	else if (bs == 0)
		printf("Last digit of %d is %d and is 0\n", n, bs);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, bs);
	return (0);
}
