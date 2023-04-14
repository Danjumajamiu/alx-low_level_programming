#include "main.h"
#include <stdlib.h>

/**
 * char_free_grid - will free a 2 dimensional array.
 * @grid: multidimensional array of char.
 * @height: height of the array.
 *
 * Return: no return
 */
void char_free_grid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}

/**
 * strtow - will split a string into words.
 * @str: string.
 *
 * Return: pointer of an array of integers
 */
char **strtow(char *str)
{
	char **aout;
	unsigned int m, height, n, o, p;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (m = height = 0; str[m] != '\0'; m++)
		if (str[m] != ' ' && (str[m + 1] == ' ' || str[m + 1] == '\0'))
			height++;
	aout = malloc((height + 1) * sizeof(char *));
	if (aout == NULL || height == 0)
	{
		free(aout);
		return (NULL);
	}
	for (n = p = 0; n < height; n++)
	{
		for (m = p; str[m] != '\0'; m++)
		{
			if (str[m] == ' ')
				p++;
			if (str[m] != ' ' && (str[m + 1] == ' ' || str[m + 1] == '\0'))
			{
				aout[n] = malloc((m - p + 2) * sizeof(char));
				if (aout[n] == NULL)
				{
					char_free_grid(aout, n);
					return (NULL);
				}
				break;
			}
		}
		for (o = 0; p <= m; p++, o++)
			aout[n][o] = str[p];
		aout[n][o] = '\0';
	}
	aout[n] = NULL;
	return (aout);
}
