#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */

int **alloc_grid(int width, int height)
{
	int **doubar;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	doubar = malloc(sizeof(int *) * height);

	if (doubar == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		doubar[i] = malloc(sizeof(int) * width);

		if (doubar[i] == NULL)
		{
			for (; i >= 0; i--)
				free(doubar[i]);

			free(doubar);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			doubar[i][j] = 0;
	}

	return (doubar);
}
