#include <unistd.h>
#include "main.h"

/**
 * print_sign - values if c is < = > than 0
 * @c: parameter to test
 *
 * Return: c is positive: 1, c is zero: 0, c is negative: -1
 * prints + , 0, - according c value
 */
int print_sign(int c)
{
	/* can print -, 0, + */
	if (c < 0)
	{
		_putchar('-');
		return (-1);
	}
	if (c > 0)
		_putchar ('+');
	else
		_putchar ('0');

	return (c > 0);
}
