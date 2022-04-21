#include <unistd.h>

/**
 * _islower - writes the character c to stdout
 * @c: parameter to test
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	return (0);
}
