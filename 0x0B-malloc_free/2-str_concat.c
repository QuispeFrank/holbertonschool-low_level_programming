/*
 * File: 2-str_concat.c
 * Auth: Quispe Frank
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings.
 *
 * @s1: first string.
 * @s2: second string.
 *
 * Return: a pointer to the previous concatenated string.
 * NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *p;
	int lens1, lens2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* length of s1 and s2 */
	for (lens1 = 0; s1[lens1]; lens1++)
	{}
	for (lens2 = 0; s2[lens2]; lens2++)
	{}

	p = malloc(sizeof(char) * (lens1 + lens2 + 1));

	if (p != NULL)
	{
		for (lens1 = 0; s1[lens1]; lens1++)
			p[lens1] = s1[lens1];
		for (lens2 = 0 ; s2[lens2]; lens2++)
			p[lens1 + lens2] = s2[lens2];
		p[lens1 + lens2] = s2[lens2];
	}
	return (p);
}
