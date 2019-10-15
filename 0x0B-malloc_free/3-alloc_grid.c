#include <stdlib.h>

/**
 * alloc_grid - prints a grid of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: ar or NULL
 */

int **alloc_grid(int width, int height)
{
	int **ar;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	ar = malloc(sizeof(int *) * height);

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ar[i] = malloc(sizeof(int) * width);
		if (ar[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(ar[j]);
			free(ar);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			ar[i][j] = 0;
	return (ar);
}
