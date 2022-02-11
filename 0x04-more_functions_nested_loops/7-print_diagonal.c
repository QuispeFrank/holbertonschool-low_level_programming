#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - prints '\' caracter n times
 * @n: number of lines
 * Return: ...
 */
void print_diagonal(int n)
{
	int slashes, spaces;

	if (n > 0)
	{
		for (slashes = 1; slashes <= n; slashes++)
		{
			spaces = slashes - 1;
			while (spaces > 0)
			{
				_putchar(32);
				spaces--;
			}
			_putchar(92);
			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}
