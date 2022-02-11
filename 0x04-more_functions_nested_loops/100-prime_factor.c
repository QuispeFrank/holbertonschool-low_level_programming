#include "main.h"
#include <stdio.h>

/**
 * main - check the code
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
	putchar(10);
	return (0);
}
