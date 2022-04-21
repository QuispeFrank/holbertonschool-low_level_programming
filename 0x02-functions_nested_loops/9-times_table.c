#include <unistd.h>
#include "main.h"

/**
 * times_table - prints 0-9 multiplication table.
 *
 * Description: a function that prints the 9 times
 * table, starting with 0.
 *
 * Return: nothing
 */
void times_table(void)
{
	int row, col, dec, uni;

	/*
	 * prints in the form:
	 * [dec uni ',' ' '] -> [11, ]
	 */
	for (row = 0; row < 10; row++)
	{
		for (col = 0; col < 10; col++)
		{
			dec = (row * col) / 10;
			uni = (row * col) % 10;

			/* prints dec */
			if (dec != 0)
				_putchar('0' + dec);
			else if (col != 0)
				_putchar(' ');

			/* prints uni */
			_putchar('0' + uni);

			/* prints ", " */
			if (col != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
