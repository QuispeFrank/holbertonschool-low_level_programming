#include "main.h"

/**
 * print_alphabet - writes the character c to stdout
 *
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar(10);
}
