#include <unistd.h>
#include "main.h"

/**
 * _isalpha - values if c is in the alphabet
 * @c: parameter to test
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _isalpha(int c)
{
	int result;

	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		result = 1;
	}
	else
	{
		result = 0;
	}
	return (result);
}
