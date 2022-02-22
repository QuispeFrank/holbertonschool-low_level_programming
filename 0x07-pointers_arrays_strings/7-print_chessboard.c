/*
 * File: 6-print_chessboard.c
 * Auth: Quispe Frank
 */

#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - function that prints the chessboard.
 *
 * @a: pointer to 2D array from where to print.
 *
 * Return: NULL.
 *
 */
void print_chessboard(char (*a)[8])
{
	char *p;
	int i = 0;

	p = &(a[0][0]);

	while (i < 64)
	{
		if ((i != 0) && !(i % 8))
			_putchar(10);
		_putchar(*p);
		p += 1;
		i += 1;
	}
	_putchar(10);
}
