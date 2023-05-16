#include <stdlib.h>
#include "main.h"
/**
 * free_grid -  function  frees a 2 dimensional grid previously created
 * @grid: grid of memories
 * @height: integer
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int y = 0;

	for (; y < height; y++)
	{
		free(grid[y]);
	}
	free(grid);
}
