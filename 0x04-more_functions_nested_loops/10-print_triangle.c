#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @height: the size of the triangle.
 * Return: nothing.
 */
void print_triangle(int height)
{
	int h, ast, spaces;

	if (height <= 0)
	{
		_putchar('\n');
		return;
	}
	for (h = 1; h <= height; h++)
	{
		for (spaces = height - h; spaces > 0; spaces--)
			_putchar(' ');
		for (ast = 1; ast <= h; ast++)
			_putchar('#');
		_putchar('\n');
	}
}
