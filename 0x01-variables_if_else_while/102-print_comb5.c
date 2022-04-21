#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int um, cen, dec, uni, index, undex;

	/* 
	 * prints in the form:
	 * [index undex] -> [um cen dec uni] -> [00 01] .. [98 99]
	 */
	for (index = 0; index < 99; index++)
	{
		um = (index / 10) + '0';
		cen = (index % 10) + '0';

		for (undex = index + 1; undex < 100; undex++)
		{
			dec = (undex / 10) + '0';
			uni = (undex % 10) + '0';

			/* prints 00 01 .. 41 42 .. 98 99 */
			if (undex != 1)
				putchar(' ');
			putchar(um);
			putchar(cen);
			putchar(' ');
			putchar(dec);
			putchar(uni);
			if (index != 98)
				putchar(',');
		}
	}
	putchar('\n');

	return (0);
}
