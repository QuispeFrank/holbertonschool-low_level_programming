#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int  dec, uni;

	/* dec range 0-8 */
	for (dec = '0'; dec <= '8'; dec++)
	{
		/* uni range (dec + 1) - 9 */
		for (uni = dec + 1; uni <= '9'; uni++)
		{
			putchar(dec);
			putchar(uni);
			if (dec == '8' && uni == '9')
				break;
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);

	return (0);
}
