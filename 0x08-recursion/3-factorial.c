/*
 * File:.c
 * Auth: Quispe Frank
 */

#include "main.h"
#include <stdio.h>
/**
 * factorial - Returns the factorial of a given number.
 *
 * @n: number for factorial
 *
 * Return: factorial of the given number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}

