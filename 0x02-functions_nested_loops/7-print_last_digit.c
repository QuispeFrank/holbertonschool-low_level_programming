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
	if (c < 0)
		c = -1 * c;
	/* prints uni */
	_putchar(c % 10 + '0');
	return (c % 10);
}
