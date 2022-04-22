#include "main.h"

/**
 * print_most_numbers - prints digits 0-9 except 2 & 4.
 *
 * Return: nothing.
 */
void print_most_numbers(void)
{
	int digit;

	/* prints 0 1 3 5 6 7 8 9 */
	for (digit = '0'; digit <= '9'; digit++)
	{
		if (digit != '2' && digit != '4')
			_putchar(digit);
	}
	_putchar('\n');
}
