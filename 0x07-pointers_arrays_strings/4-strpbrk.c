/*
 * File: 4-strpbrk.c
 * Auth: Quispe Frank
 */

#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - function that gets the length of a prefix substring.
 *
 * @s: A pointer to array of chars where to find the chars
 * @accept: array of chars from it gets the char
 *
 * Return: A pointer to the byte in s that matches one of the
 * bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int catch = 0, counter = 0;
	int i = 0, j = 0;

	while (s[i] != '\0')
	{
		j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				catch = 1;
				break;
			}
			j += 1;
		}
		if (catch == 1)
			break;
		i += 1;
		counter += 1;
	}
	if (catch != 1)
		return (NULL);
	return (s + counter);
}
