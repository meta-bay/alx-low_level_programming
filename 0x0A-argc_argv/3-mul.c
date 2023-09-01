#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: counter
 * @argv: the array
 * Return: 1 or 0
 */

int main(int argc, char *argv[])
{
	int i;
	int product;

	product = 1;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
			product *= atoi(argv[i]);
		printf("%d\n", product);
	}
	printf("Error\n");
	return (1);
}
