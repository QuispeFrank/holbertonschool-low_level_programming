#include <unistd.h>
#include "main.h"

/**
 * jack_bauer - prints the last number of a nuber
 *
 * Return: absolute value of a number
 */
void jack_bauer(void)
{
	int m1, m2, h1, h2;

	for (h1 = 0; h1 <= 2; h1++)
	{
	for (h2 = 0; h2 <= 9; h2++)
	{
	for (m1 = 0; m1 <= 5; m1++)
	{
	for (m2 = 0; m2 <= 9; m2++)
	{
		_putchar(h1 + 48);
		_putchar(h2 + 48);
		_putchar(58);
		_putchar(m1 + 48);
		_putchar(m2 + 48);
		_putchar(10);
		if (h1 == 2 && h2 == 3 && m1 == 5 && m2 == 9)
		{
			h2 = 10;
		}
	}
	}
	}
	}
}
