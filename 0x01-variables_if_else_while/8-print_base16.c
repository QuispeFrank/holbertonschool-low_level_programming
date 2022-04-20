#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char hexa;

	/* prints 0-f hexadecimal numbers */
	for (hexa = '0'; hexa <= '9'; hexa++)
		putchar(hexa);
	for (hexa = 'a'; hexa <= 'f'; hexa++)
		putchar(hexa);
	putchar(10);

	return (0);
}
