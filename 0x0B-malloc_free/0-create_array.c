/*
 * File: 0-create_array.c
 * Auth: Quispe Frank
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes
 * it with a specific char.
 *
 * @size: argument counter.
 * @c: argument vector.
 *
 * Return: NULL if size = 0
 * a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *p = NULL;
	unsigned int i;

	if (size == 0)
		return (NULL);
	p = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
		p[i] = c;
	return (p);
}
