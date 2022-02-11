#include "main.h"
#include <stdio.h>

/**
 * print_square - prints # square
 * @n: height
 * Return: ...
 */
void print_square(int n)
{
	int michi, height;

	if (n > 0)
	{
		for (height = 1; height <= n; height++)
		{
			for (michi = 1; michi <= n; michi++)
			{
				_putchar(35);
			}
			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}

