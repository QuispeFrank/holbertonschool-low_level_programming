#include "main.h"
#include <stdio.h>

/**
 * more_numbers - Determine if a character is a number
 * Return: ...
 */
void more_numbers(void)
{
	int d, u, number, times;

	for (times = 1; times <= 10; times++)
	{
		for (number = 0; number <= 14; number++)
		{
			if (number >= 10)
			{
				d = 1;
				_putchar(d + 48);
			}
			u = number % 10;
			_putchar(u + 48);
		}
		_putchar(10);
	}
}
