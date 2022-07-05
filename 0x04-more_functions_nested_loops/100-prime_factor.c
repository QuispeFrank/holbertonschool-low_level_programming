#include "main.h"

/**
 * main - 100-prime_factor.
 * Description: a program that finds and prints
 * the largest prime factor of the number 612852475143,
 * followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	long n = 612852475143;
	long div, rec;

	for (div = 2; div <= n; div++)
	{
		if (n % div == 0)
		{
			n = n / div;
			rec = div;
			div = 1;
		}
	}
	printf("%lu", rec);
	putchar('\n');
	return (0);
}
