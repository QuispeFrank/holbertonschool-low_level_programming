#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line.
 *
 * Return: nothing.
 */
void print_numbers(void)
{
	int digit;

	/* prints 0-9 */
	for (digit = '0'; digit <= '9'; digit++)
		_putchar(digit);

	_putchar('\n');
}
