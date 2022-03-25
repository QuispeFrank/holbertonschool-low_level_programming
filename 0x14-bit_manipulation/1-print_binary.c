#include "main.h"

/**
 * print_binary - function that prints the
 * binary representation of a number.
 * @n: the  n number in decimal.
 * Return: the number in binary.
 */

void print_binary(unsigned long int n)
{
	unsigned long int var = 1;
	int i = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	var = var << 63;

	while (((var >> i) & n) == 0)
		i++;

	for (; i <= 63; i++)
	{
		if ((var >> i & n) != 0)
			_putchar('1');
		else
			_putchar('0');
	}
}
