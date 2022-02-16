#include "main.h"
#include <stdio.h>
/**
 * print_array - function that prints half of a string, followed by a new line.
 *
 * @a: pointer to array of integers
 * @n: number of elements of the array to be printed
 *
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int n_elements = n;
	int index = 0;

	while (index < (n_elements - 1))
	{
		printf("%d, ", a[index]);
		index += 1;
		if (index  == (n_elements - 1))
			printf("%d", a[index]);
	}
	printf("\n");
}
