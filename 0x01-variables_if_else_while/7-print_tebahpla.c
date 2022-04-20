#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter;

	/* prints the reverse alphabet */
	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);
	putchar(10);

	return (0);
}
