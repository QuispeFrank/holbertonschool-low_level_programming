#include <unistd.h>
#include "main.h"

/**
 * _abs - function that prints the absolute value of a number.
 * @c: number.
 *
 * Return: absolute value of @c.
 */
int _abs(int c)
{
	if (c < 0)
		return (-1 * c);

	return (c);
}
