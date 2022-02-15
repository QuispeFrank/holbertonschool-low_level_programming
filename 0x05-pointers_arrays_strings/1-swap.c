#include "main.h"
#include <stdio.h>

/**
 * swap_int - function that takes a pointer to an int as
 * parameter and updates the value it points to 98
 *
 * @a: first pointer
 * @b: second pointer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int aux = 0;

	aux = *a;
	*a = *b;
	*b = aux;
}
