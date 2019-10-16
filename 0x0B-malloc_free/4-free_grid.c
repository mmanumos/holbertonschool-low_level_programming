#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * free_grid - free array
 * multidimensional
 *
 * @grid : multidimensional array
 * @height : number of rows
 *
 * Return: fail-Null succes-str
 */

void free_grid(int **grid, int height)
{
	int c1;

	if ((grid == NULL) || (grid == 0))
		return;

	for (c1 = 0; c1 < height;  c1++)
		free(grid[c1]);

	free(grid);

}
