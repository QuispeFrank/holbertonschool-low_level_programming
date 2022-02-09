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
	int toreturn;
	int toprint;

	if (c == 0)
	{
		toreturn = 0;
		toprint = 48;
	}
	else
	{
		if (c < 0)
		{
			toreturn = -1;
			toprint = 45;
		}
		else
		{
			toreturn = 1;
			toprint = 43;
		}
	}
	_putchar(toprint);
	return (toreturn);
}
