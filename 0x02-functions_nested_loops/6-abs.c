#include <unistd.h>
#include "main.h"

/**
 * _abs - prints absolute value of a number
 * @c: parameter to test
 *
 * Return: absolute value of a number
 */
int _abs(int c)
{
	if (c < 0)
		return (-1 * c);

	return (c);
}
