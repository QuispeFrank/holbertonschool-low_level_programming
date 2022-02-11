#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - Determine if a character is a number
 * Return: ...
 */
void print_most_numbers(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
	{
		if (digit != 2 && digit != 4)
		{
			_putchar(48 + digit);
		}
	}
	_putchar(10);
}
