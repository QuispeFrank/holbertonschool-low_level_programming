#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @slashes: number of inverted slashes to be printed.
 *
 * Return: nothing.
 */
void print_diagonal(int slashes)
{
	int spaces, index = 0;

	/* prints and exits */
	if (slashes <= 0)
		_putchar('\n');

	/* prints slashes */
	for ( ; slashes > 0; slashes--, index++)
	{
		/* prints spaces */
		for (spaces = 0; spaces < index; spaces++)
			_putchar(' ');

		_putchar('\\');
		_putchar('\n');
	}
}
