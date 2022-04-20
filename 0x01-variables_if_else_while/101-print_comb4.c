#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int  cen, dec, uni;

	/* cen range 0-7 */
	for (cen = '0'; cen <= '7'; cen++)
	{
		/* dec range 0-8 */
		for (dec = cen + 1; dec <= '8'; dec++)
		{
			/* uni range 0-9 */
			for (uni = dec + 1; uni <= '9'; uni++)
			{
				putchar(cen);
				putchar(dec);
				putchar(uni);
				if (cen + dec + uni == 168)
					break;
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar(10);

	return (0);
}

