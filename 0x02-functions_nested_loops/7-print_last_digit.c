#include <unistd.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @c: number.
 *
 * Return: the value of the last digit.
 */
int print_last_digit(int c)
{
	/* test last digit */
	c = c % 10;
	if (c < 0)
		c = -1 * c;

	/* prints last digit */
	_putchar(c % 10 + '0');
	return (c % 10);
}
