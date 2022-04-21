#include "main.h"

/**
 * print_alphabet - writes the character c to stdout
 *
 */
void print_alphabet(void)
{
	char letter;

	/* prints a-z */
	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
