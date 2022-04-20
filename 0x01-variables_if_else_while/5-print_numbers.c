#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit;

	/* prints 0-9 digits */
	for (digit = 0; digit <= 9; digit++)
		printf("%d", digit);
	putchar(10);

	return (0);
}
