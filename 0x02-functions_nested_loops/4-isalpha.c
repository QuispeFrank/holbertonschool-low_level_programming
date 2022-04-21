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

	/* checks if c is a letter */
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);

	return (0);
}
