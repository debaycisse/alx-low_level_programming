#include <stdlib.h>

/**
 * free_grid - frees up the used dynamic memory space
 * @grid: the pointer to the 2D array whose used memory space is to be freed
 * @height: the number of the sub-array of the 2D array
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
