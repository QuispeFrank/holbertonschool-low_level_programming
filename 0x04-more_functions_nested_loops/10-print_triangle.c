#include "main.h"
#include <stdio.h>

/**
 * print_triangle - prints '\' caracter n times
 * @n: number of lines
 * Return: ...
 */
void print_triangle(int n)
{
	int michi, height, spaces;

	if (n > 0)
	{
		for (height = 1; height <= n; height++)
		{
			for (spaces = 1; spaces <= n - height; spaces++)
			{
				_putchar(32);
			}
			for (michi = 1; michi <= height; michi++)
			{
				_putchar(35);
			}
			if (height != n)
			{
				_putchar(10);
			}
		}
	}
	_putchar(10);
}
