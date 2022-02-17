/*
 * File: 4-rev_array.c
 * Auth: Quispe Frank
 */

#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 *
 * @a: A pointer to array of integers
 * @n: number of elements of the array
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int n_elements = n;
	int Max_changes, changes = 1;
	int aux;

	Max_changes = n_elements / 2;

	while (changes <= Max_changes)
	{
		aux = a[changes - 1];
		a[changes - 1] = a[n_elements - changes];
		a[n_elements - changes] = aux;
		changes++;
	}
}
