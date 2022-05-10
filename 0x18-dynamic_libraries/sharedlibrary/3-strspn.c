#include "main.h"
#include <stdio.h>

/**
 * _strspn - function that gets the length of a prefix substring.
 *
 * @s: A pointer to array of chars where to find the chars
 * @accept: array of chars from it gets the char
 *
 * Return: the number of bytes in the initial segment of s which
 * consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int catch, counter = 0;
	int i = 0, j = 0;

	while (s[i] != '\0')
	{
		catch = 0;
		j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				counter += 1;
				catch = 1;
				i += 1;
				break;
			}
			j += 1;
		}
		if (catch == 0)
			break;
	}
	return (counter);
}
