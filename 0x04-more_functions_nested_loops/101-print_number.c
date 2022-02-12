#include "main.h"

/**
 * print_number - Determine if a character is capital
 * @n: value to test
 * Return: ...
 */
void print_number(int n)
{
	int digitos = 10;
	int signo = 1;
	int coc, res, d, j;

	/*test if n is negative*/
	if (n < 0)
	{
		signo = -1;
		_putchar(45);
	}

	while (digitos > 0)
	{
		/*block to determine divisor d new value*/
		d = 1;
		j = digitos - 1;

		while (j > 0)
		{
			d = d * 10;
			j--;
		}
		/*determine res value*/
		coc = n / d;
		res = (coc % 10) * signo;

		/*print res*/
		if (coc != 0 || (n == 0 && digitos == 1))
		{ _putchar(res + 48); }

		digitos--;

	}
}
