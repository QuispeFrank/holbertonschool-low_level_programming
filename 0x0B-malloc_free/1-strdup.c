/*
 * File: 1-strdup.c
 * Auth: Quispe Frank
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - eturns a pointer to a newly allocated
 * space in memory, which contains a copy of the
 * string given as a parameter.
 *
 * @str: argument counter.
 *
 * Return: NULL if str = NULL or insufficient memory was available
 */
char *_strdup(char *str)
{
	char *p;
	unsigned int i = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{}

	p = malloc(sizeof(char) * (i + 1));

	if (p != NULL)
	{
		for (i = 0; str[i]; i++)
			p[i] = str[i];
		p[i] = '\0';
	}

	return (p);
}
