#include "main.h"
#include <stdio.h>

/**
 * print_numbers - Determine if a character is a number
 * Return: ...
 */
void print_numbers(void)
{
	int digit;

	for(digit = 0; digit <= 9; digit++)
	{
		_putchar(digit + 48);
	}
	_putchar(10);
}
