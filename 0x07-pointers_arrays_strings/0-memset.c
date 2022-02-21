/*
 * File: 0-memset.c
 * Auth: Quispe Frank
 */

#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 *
 * @s: A pointer to array of chars
 * @b: char that will be placed
 * @n: number of chars that will be placed
 *
 * Return: @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
