#include "main.h"

/**
 * _strlen_recursion - strlen recursion.
 * @s: a pointer to the string.
 * Return: length of string.
 */
int _strlen_recursion(const char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

/**
 * binary_to_uint - a function that converts a
 * binary number to an unsigned int.
 *
 * @b: a pointer to binary string.
 *
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b
 * that is not 0 or 1.
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0,  len = 0;
	unsigned int sum = 0;

	len = _strlen_recursion(b);
	/*validacion del puntero*/
	while (*(b + i) != '\0')
	{
		if (b[i] >= 48 && b[i] <= 49)
			i++;
		else
			return (0);
	}

	for (i = 0; b[i]; i++)
	{
		sum += (b[i] - 48) << (len - (i + 1));
	}
	return (sum);
}
