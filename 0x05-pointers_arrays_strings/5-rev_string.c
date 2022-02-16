#include "main.h"
/**
 * rev_string - function that reverses a string.
 * @s: ..
 * Return: nothing
 */

void rev_string(char *s)
{
	int index = 0;
	int Max_changes, changes = 1;
	char aux;

	while (s[index] != '\0')
	{
		index++;
	}
	Max_changes = index / 2;

	while (changes <= Max_changes)
	{
		aux = s[changes - 1];
		s[changes - 1] = s[index - changes];
		s[index - changes] = aux;
		changes++;
	}
}
