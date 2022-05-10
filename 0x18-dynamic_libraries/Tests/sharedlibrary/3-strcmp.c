#include "main.h"

/**
 * _strcmp - function that concatenates two strings.
 * The _strncat function is similar to the _strcat function, except that
 * it will use at most n bytes from src
 * src does not need to be null-terminated if it contains n or more bytes.
 *
 * @s1: A pointer to the first string to be compared with @s2
 * @s2: A pointer to the second string
 *
 *
 * Return: return 0 if s1 = s2.
 */

int _strcmp(char *s1, char *s2)
{
	int c = 0, i = 0;

	while (s1[i] != '\0')
	{
		c = s1[i] - s2[i];
		i += 1;
		if (c != 0)
			break;
	}
	return (c);
}
