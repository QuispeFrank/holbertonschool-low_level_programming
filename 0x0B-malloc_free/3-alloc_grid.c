/*
 * File: 3-alloc_grid.c
 * Auth: Quispe Frank
 */

#include <stdio.h>
#include <stdlib.h>

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
	if (p != NULL)
	{
		for (y = 0; y < height; y++)
		{
			p[y] = malloc(sizeof(int) * width);
			/* p[y] exists again? */
			if (p[y] == NULL)
				return (NULL);
		}
		for (y = 0; y < height; y++)
		{
			/* fill the matrix */
			for (x = 0; x < width; x++)
				p[y][x] = 0;
		}
	}
	return (p);
}
