/*
 * File: 1-print_rev_recursion.c
 * Auth: Quispe Frank
 */

#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - function that prints a string in reverse.
 *
 * @s: pointer to array from where to print.
 *
 * Return: nothing.
 */
int _strlen_recursion(char s)
{
	if (s == '\0')
	{
	return (0);
	}

	return (1 + _strlen_recursion(1 + s));
}
