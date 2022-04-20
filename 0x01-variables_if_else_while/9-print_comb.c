#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ascii;

	/* prints 0, 1, .... 8, 9 */
	for (ascii = 48; ascii <= 57; ascii++)
	{
		putchar(ascii);
		if (ascii == 57)
			putchar(10);
		else
		{
			putchar(44);
			putchar(32);
		}
	}

	return (0);
}
