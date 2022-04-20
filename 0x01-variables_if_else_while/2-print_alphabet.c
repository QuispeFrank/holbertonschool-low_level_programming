#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter;

	/* prints the alphabet */
	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	putchar(10);

	return (0);
}
