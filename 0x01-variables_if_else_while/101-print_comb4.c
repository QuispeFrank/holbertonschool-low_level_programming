#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int  cen, dec, uni;

	/* prints in the form [cen dec uni] -> [012] .. [789] */
	for (cen = '0'; cen <= '7'; cen++)
	{
		/* dec range 0-8 */
		for (dec = cen + 1; dec <= '8'; dec++)
		{
			/* uni range 0-9 */
			for (uni = dec + 1; uni <= '9'; uni++)
			{
				if (uni != '2')
					putchar(' ');
				putchar(cen);
				putchar(dec);
				putchar(uni);
				if (cen != '7')
					putchar(',');
			}
		}
	}
	putchar('\n');

	return (0);
}

