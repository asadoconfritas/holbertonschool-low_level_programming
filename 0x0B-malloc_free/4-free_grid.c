#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2d grid
 * @grid: pointer
 * @height: int
 * Return: end program
 **/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
