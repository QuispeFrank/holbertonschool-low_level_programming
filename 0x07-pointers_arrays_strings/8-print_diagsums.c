/*
 * File: 8-print_diagsums.c
 * Auth: Quispe Frank
 */

#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the two
 * diagonals of a square matrix of integers.
 *
 * @a: pointer to 2D array from where to print.
 * @size: indicates array dimension by size*size
 *
 * Return: NULL.
 *
 */
void print_diagsums(int *a, int size)
{
	int *p = a;
	int inv_slash_s = 0, slash_s = 0;
	int i = 1;

	while (i <= size)
	{
		inv_slash_s += *(p + (i - 1) * (size + 1));
		slash_s += *(p + (size - 1) + (i - 1) * (size - 1));
		i++;
	}
	printf("%d, %d\n", inv_slash_s, slash_s);
}
