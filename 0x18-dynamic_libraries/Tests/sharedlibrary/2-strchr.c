#include "main.h"
#include <stdio.h>

/**
 * _strchr - function that locates a character in a string.
 *
 * @s: A pointer to array of chars where to find the char
 * @c: char to find
 * Return: @dest
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;
	unsigned int fin = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			break;
		i++;
		if (s[i + 1] == '\0')
			fin = 1;
	}
	if (c != '\0' && fin == 1)
		return (NULL);
	return (s + i);
}
