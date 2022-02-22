/*
 * File: 5-strstr.c
 * Auth: Quispe Frank
 */

#include "main.h"
#include <stdio.h>

/**
 * _strstr - function that gets the length of a prefix substring.
 *
 * @haystack: A pointer to array where we search the string @needle
 * @needle: A pointer to array that contains the string we want search.
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0, catched = 0, k;

	if (*needle == 0)
		return (haystack);

	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[j])
		{
			k = 0;

			while (needle[j + k] != '\0')
			{
				if (haystack[i + k] != needle[j + k])
					break;
				k += 1;
			}
			if (needle[j + k] == '\0')
			{
				catched = 1;
				break;
			}
		}
		i += 1;
	}
	if (catched == 1)
		return (haystack + i);
	return (NULL);
}
