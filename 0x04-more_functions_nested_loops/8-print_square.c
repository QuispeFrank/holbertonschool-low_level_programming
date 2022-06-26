#include "main.h"

/**
 * print_square - prints a square, followed by a new line.
 * @size: the size of the square.
 *
 * Return: nothing
 */
void print_square(int size)
{
	int pos_x, pos_y = 0;

	if (size <= 0)
		_putchar('\n');

	for (; pos_y < size; pos_y++)
	{
		for (pos_x = 0; pos_x < size; pos_x++)
			_putchar('#');
		_putchar('\n');
	}

}
