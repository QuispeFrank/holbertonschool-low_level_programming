/*
 * File: 4-free_grid.c
 * Auth: Quispe Frank
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid -  a function that frees a 2 dimensional grid
 * previously created by your alloc_grid function.
 *
 * @grid: pointers to be freed.
 * @height: height of grid. 
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int y = -1;

	while (height > ++y)
		free(grid[y]);
	free(grid);
}
