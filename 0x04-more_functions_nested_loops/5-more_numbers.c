#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14.
 *
 * Return: nothing.
 */
void more_numbers(void)
{
	int repeat, index, uni, dec;

	for (repeat = 0; repeat < 10; repeat++)
	{
		for (index = 0; index < 15; index++)
		{
			dec = (index / 10) + '0';
			uni = (index % 10) + '0';

			/* prints 01 ..89.. 1314 */
			if (index > 9)
				_putchar(dec);
			_putchar(uni);
		}
		_putchar('\n');
	}
}
