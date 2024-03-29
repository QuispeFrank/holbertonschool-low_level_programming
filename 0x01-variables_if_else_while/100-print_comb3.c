#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int  dec, uni, index, undex;

	/*
	 * prints in the form:
	 * [index undex] -> [dec uni] -> [01] .. [89]
	 */
	for (index = 0; index < 9; index++)
	{
		dec = index + '0';

		for (undex = index + 1; undex < 10; undex++)
		{
			uni = undex + '0';

			/* prints 01 .. 29 34 .. 89 */
			if (undex != 1)
				putchar(' ');
			putchar(dec);
			putchar(uni);
			if (index != 8)
				putchar(',');
		}
	}
	putchar('\n');

	return (0);
}
