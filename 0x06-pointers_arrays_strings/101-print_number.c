#include "main.h"

/**
 * print_number - prints an integer.
 * @n: number to be printed.
 * Return: nothing.
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n >= 10)
		print_number(n / 10);
	_putchar((n % 10) + '0');
}
