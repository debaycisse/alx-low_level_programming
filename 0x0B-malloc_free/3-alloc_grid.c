#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - creates and initializes 2-dimensional array
 * @width: the width of the grid
 * @height: the height of the grid
 *
 * Description: creates a 2-dimensional array, initializes it with zero (0)
 * Return: the 2D array if no error, otherwise NULL
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(height * sizeof(*grid));
	if (grid == NULL)
		return (NULL);
	i = 0;
	while (i < height)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
			return (NULL);
		j = 0;
		while (j < width)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
	return (grid);
}
