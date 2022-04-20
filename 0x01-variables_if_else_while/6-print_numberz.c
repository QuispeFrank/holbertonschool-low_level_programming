#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ascii;

	/* prints from 0 to 9 ascii characters */
	for (ascii = 48; ascii <= 57; ascii++)
		putchar(ascii);
	putchar(10);

	return (0);
}
