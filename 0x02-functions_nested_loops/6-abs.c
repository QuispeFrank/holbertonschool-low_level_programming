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
	int toreturn;

	if (c == 0)
	{
		toreturn = 0;
	}
	else
	{
		if (c < 0)
		{
			toreturn = -1 * c;
		}
		else
		{
			toreturn = c;
		}
	}
	return (toreturn);
}
