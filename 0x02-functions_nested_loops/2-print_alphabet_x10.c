#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 */
void print_alphabet_x10(void)
{
	int repeat, letter;

	for (repeat = 0; repeat < 10; repeat++)
	{
		/* prints a-z */
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
