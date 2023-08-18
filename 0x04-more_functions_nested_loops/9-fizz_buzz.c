#include <stdio.h>

/**
*main - fizzbuzz
*Return: returns 0
*/

int main(void)
{
	int num1 = 1;

	while (++num1 < 100)
	{
		if ((num1 % 3 == 0) && (num1 % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if ((num1 % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((num1 % 5) == 0)
		{
			if (num1 != 100)
			{
				printf("Buzz ");
			}
			else
			{
				printf("Buzz");
			}
		}
		else
		{
			printf("%d ", num1);
		}
	}
	printf("\n");

	return (0);
}

