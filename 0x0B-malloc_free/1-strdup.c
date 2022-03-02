/*
 * File: 0-create_array.c
 * Auth: Quispe Frank
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - creates an array of chars, and initializes
 * it with a specific char.
 *
 * @str: argument counter.
 *
 * Return: NULL if size = 0
 * a pointer to the array, or NULL if it fails
 */
char *_strdup(char *str)
{
	char *p;
	unsigned int i = 0;

	if (str == NULL)
		return (NULL);
	while (str[i++])

	p = malloc(sizeof(char) * (i + 1));

	if (p != NULL)
	{
		for (i = 0; str[i]; i++)
			p[i] = str[i];
		p[i] = '\0';
	}

	return (p);
}
