/*
 * File:.c
 * Auth: Quispe Frank
 */

#include "main.h"
#include <stdio.h>

#include "main.h"

/**
 * check_prime - Detects if a number is prime or not.
 *
 * @number: number
 *
 * @iterator: iterator
 *
 * Return: 1 if is prime, 0 otherwise.
 */

int check_prime(int number, int iterator)
{
	if (number == iterator)
		return (1);

	if (number % iterator == 0)
		return (0);

	return (check_prime(number, iterator + 1));
}

/**
 * is_prime_number - Detects if a number is prime or not.
 *
 * @n: number
 *
 * Return: 1 if is prime, 0 otherwise.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	if (n % 2 == 0 && n != 2)
		return (0);

	return (check_prime(n, 2));
}
