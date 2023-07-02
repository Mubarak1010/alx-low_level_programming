#include "main.h"
#include <stdlib.h>

/**
 * free_grid - program entry
 * @grid: grid
 * @height: height
 * Return: Nothing.
 */

void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);

	free(grid);
}
