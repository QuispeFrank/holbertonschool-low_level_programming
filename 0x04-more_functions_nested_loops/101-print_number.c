#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * print_number - Determine if a character is capital
 * @n: value to test
 * Return: ...
 */
void print_number(int n)
{
	int digits = 0;
	int times, out, i, div;
	int test = 10;
	int res = 99;
	int signo = 99;

	/*Determine if n is negative*/
	if (n < 0)
	{
		n = n * -1;
		signo = -1;
	}

	/*Determine the number of digits of n*/
	while (res != 0)
	{
		res = n / test;
		digits++;
		test = 10 * test;
	}

	/*if n is negative it'll prints - before the number*/
	if (signo == -1)
	{ _putchar(45);	}

	/*prints n with putchar*/
	for (times = digits; times >= 1; times--)
	{
		if (times == 1)
		{ div = 1; }
		else
		{ div = 10; }

		for (i = times - 1; i > 1; i--)
		{ div = div * 10; }

		out = n / div;
		n = n % div;
		_putchar(out + 48);
	}
}
