/*
 * File:.c
 * Auth: Quispe Frank
 */

#include "main.h"
#include <stdio.h>
/**
 * find_sqrt - Find the SQRT of a number (dump way).
 *
 * @n: number
 *
 * @iterator: iterator
 *
 * Return: natural square root or -1.
 */

int find_sqrt(int n, int iterator)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (0);

	if ((n / iterator) == iterator && n % iterator == 0)
		return (iterator);

	if (iterator > (n / iterator))
		return (-1);

	return (find_sqrt(n, iterator + 1));
}

/**
 * _sqrt_recursion - Finds the natural square root of a number.
 *
 * @n: number
 *
 * Return: natural square root or -1.
 */

int _sqrt_recursion(int n)
{
	return (find_sqrt(n, 1));
}

