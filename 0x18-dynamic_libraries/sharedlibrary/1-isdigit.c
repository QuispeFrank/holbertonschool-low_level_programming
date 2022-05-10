#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9).
 * @ascii: character.
 *
 * Return: 1 if digit was found, 0 otherwise.
 */
int _isdigit(int ascii)
{
	if (ascii >= '0' && ascii <= '9')
		return (1);

	return (0);
}
