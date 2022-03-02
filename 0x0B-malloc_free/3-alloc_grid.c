/*
 * File: 3-alloc_grid.c
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

/**
 * alloc_grid - a function that returns a pointer to a 2
 * dimensional array of integers.
 *
 * @width: width of the array.
 * @height: height of the array.
 *
 * Return: a pointer to the array created
 * NULL - on failure
 * NULL - if width or height is 0 or negative.
 */
int **alloc_grid(int width, int height)
{
	int **p = NULL, x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = malloc(sizeof(int *) * height);
	/* p exists? */
	if (p == NULL)
		return (NULL);

	for (y = 0; y < height; y++)
	{
		p[y] = malloc(sizeof(int) * width);
		/* p[y] exists again? */
		if (p[y] == NULL)
		{
			free_grid(p, y + 1);
			return (NULL);
		}
	}
	for (y = 0; y < height; y++)
	{
		/* fill the matrix */
		for (x = 0; x < width; x++)
			p[y][x] = 0;
	}
	return (p);
}
