#include "main.h"
#include <stdio.h>

/**
 * print_line - Determine if a character is a number
 * Return: ...
 */
void print_line(int n)
{
	int lines;

	if (n > 0)
	{
		for (lines = 1; lines <= n; lines++)
		{
			_putchar(95);
		}
	}
	_putchar(10);
}
