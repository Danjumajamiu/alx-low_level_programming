#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - will return a pointer to a 2-dimensional array of
 *               integers with each element initalized to 0.
 * @width: The width of the 2-dimensional array.
 * @height: The height of the 2-dimensional array.
 *
 * Return: If width and heght is less than or equal 0, function fails - NULL.
 *         Otherwise - a pointer to the 2-dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		grid[a] = malloc(sizeof(int) * width);
		if (grid[a] == NULL)
		{
			for ( ; a >= 0; a--)
				free(grid[a]);
			free(grid);
			return (NULL);
		}
		else
		{
			for (b = 0; b < width; b++)
				grid[a][b] = 0;
		}
	}
	return (grid);
}
