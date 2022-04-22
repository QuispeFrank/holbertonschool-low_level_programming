#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase character.
 * @ascii: character.
 *
 * Return: 1 in uppercase, otherwise 0.
 */
int _isupper(int ascii)
{
	if (ascii >= 'A' && ascii <= 'Z')
		return(1);

	return (0);
}
