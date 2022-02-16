#include "main.h"
/**
 * rev_string - function that reverses a string.
 * @s: ..
 * Return: nothing
 */

void rev_string(char *s)
{
	int n_elements = 0;
	int Max_changes, changes = 1;
	char aux;

	while (s[n_elements] != '\0')
	{
		n_elements++;
	}
	Max_changes = n_elements / 2;

	while (changes <= Max_changes)
	{
		aux = s[changes - 1];
		s[changes - 1] = s[n_elements - changes];
		s[n_elements - changes] = aux;
		changes++;
	}
}
