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

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	product = 1;
	for (i = 1; i < argc; i++)
		product *= atoi(argv[i]);
	printf("%d\n", product);
	return (0);
}

